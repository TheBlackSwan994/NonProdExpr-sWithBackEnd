
#define BOOST_ASIO_DISABLE_THREADS

#include "server.h"
#include "client.h"


typedef boost::asio::ip::address adress;

using boost::asio::ip::tcp;
namespace asio = boost::asio;
using namespace std;

int main(int argc, char *argv[]) {



    string phone_number;
    string password_value;
    //Временный костыль
    cin>>phone_number;
    cin>>password_value;
    //Временный костыль

client lcl_client(phone_number,password_value);



;


    return 0;
}
