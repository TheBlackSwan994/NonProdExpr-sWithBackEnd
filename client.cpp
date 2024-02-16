//
// Created by theblackswan on 14.02.24.
//

#include "client.h"

typedef boost::asio::ip::address adress;

using boost::asio::ip::tcp;
namespace asio = boost::asio;
using namespace std;


client::client(string phone_number, string password_value){

    asio::io_service  ioServ;
    asio::ip::tcp::endpoint endPt(adress::from_string("127.0.0.1"),5432);
    asio::ip::tcp::socket sock(ioServ);
    sock.connect(endPt);


    asio::streambuf stbuff;
    istream checkValueInDb(&stbuff);
    checkValueInDb>>phone_number>>password_value;
    asio::read(sock, stbuff);
    //Написать обработку значений, которая сверяет введёные значения с значениями из бд.


    // Реализовать следующую логику: Значения которые будут записываться в phone_number и password_value сравнивать с значениями из бд. В случае ошибки return 1
};


client::~client(){
//наверное надо написать дисконект наверное, не знаю.

};


