#include <iostream>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

typedef boost::shared_ptr<tcp::socket> socket_ptr;

int main(int argc, char* argv[])
{
    boost::asio::io_service service;
    tcp::endpoint ep(tcp::v4(), 2001);
    tcp::acceptor acc(service, ep);

    socket_ptr sock(new tcp::socket(service));

    service.run();
}
