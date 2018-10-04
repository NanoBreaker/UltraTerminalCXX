//
// Created by NanoBreaker on 04.10.2018.
//
#include <iostream>

#include "Server.h"

void Server::Start() {
    server_thread = std::thread(&Server::ServerThread, this);
    std::cout << "--- SERVER STARTED ---" << std::endl;
}

void Server::Stop() {
    interrupted = false;
    std::cout << "--- SERVER STOPED ---" << std::endl;
}

void Server::ServerThread() {
    while (!interrupted) {
        std::cout << "LISTENING PORTS" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
