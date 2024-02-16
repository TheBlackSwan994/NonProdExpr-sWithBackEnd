//
// Created by theblackswan on 14.02.24.
//
#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <boost/asio/buffer.hpp>
#include <boost/asio/streambuf.hpp>
#include <boost/system/system_error.hpp>
#include <ostream>
#include <istream>

#ifndef UNTITLED_CLIENT_H
#define UNTITLED_CLIENT_H

typedef boost::asio::ip::address adress;

using boost::asio::ip::tcp;
namespace asio = boost::asio;
using namespace std;


class client {
private:

public:
    client();

    client(string phone_number, string password_value);

    ~client();

};


#endif //UNTITLED_CLIENT_H
