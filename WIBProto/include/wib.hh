#ifndef __WIB_HH
#define __WIB_HH

#include "wib.pb.h"

#include <zmq.hpp>
#include <string>

class WIB_ZMQ {

public:

    WIB_ZMQ();
    ~WIB_ZMQ();

    void connect(const std::string &zmq_endpoint);

    template <class R, class C>
    bool send_command(const C &msg, R &repl, int timeout_ms = -1) {

        wib::Command command;
        command.mutable_cmd()->PackFrom(msg);
        
        std::string cmd_str;
        command.SerializeToString(&cmd_str);
        
        zmq::message_t request(cmd_str.size());
        memcpy((void*)request.data(), cmd_str.c_str(), cmd_str.size());
        socket.send(request,zmq::send_flags::none);
        
        if (zmq_poll(&poller, 1, timeout_ms) <= 0) {
            return false;
        }
        
        zmq::message_t reply;
        socket.recv(reply,zmq::recv_flags::none);
        
        std::string reply_str(static_cast<char*>(reply.data()), reply.size());
        repl.ParseFromString(reply_str);
        
        return true;
    }
    
protected:
    
    zmq::context_t context;
    zmq::socket_t socket;
    zmq::pollitem_t poller;
    
};

#endif

