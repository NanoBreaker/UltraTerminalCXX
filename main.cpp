#include <iostream>
#include <thread>

#include "Server.h"

int main() {
    Server *server = new Server();
    server->Start();
    std::this_thread::sleep_for( std::chrono::seconds(10) );
    server->Stop();
    delete server;
    return 0;
}