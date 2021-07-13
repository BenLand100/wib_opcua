#include "wib.hh"

WIB_ZMQ::WIB_ZMQ() 
    : context(1)
    , socket(context, ZMQ_REQ)
{

}

WIB_ZMQ::~WIB_ZMQ() 
{

}

void WIB_ZMQ::connect(const std::string &zmq_endpoint)
{
    socket.connect(zmq_endpoint);
    poller.socket = socket;
    poller.events = ZMQ_POLLIN;
}


