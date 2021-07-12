#ifndef __WIB_HH
#define __WIB_HH

#include "wib.pb.h"

#include <zmq.hpp>
#include <string>

template <class R, class C>
void send_command(zmq::socket_t &socket, const C &msg, R &repl) {

    wib::Command command;
    command.mutable_cmd()->PackFrom(msg);
    
    std::string cmd_str;
    command.SerializeToString(&cmd_str);
    
    zmq::message_t request(cmd_str.size());
    memcpy((void*)request.data(), cmd_str.c_str(), cmd_str.size());
    socket.send(request,zmq::send_flags::none);
    
    zmq::message_t reply;
    socket.recv(reply,zmq::recv_flags::none);
    
    std::string reply_str(static_cast<char*>(reply.data()), reply.size());
    repl.ParseFromString(reply_str);
    
}

#endif

