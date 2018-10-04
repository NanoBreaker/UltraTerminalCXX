//
// Created by NanoBreaker on 04.10.2018.
//

#ifndef ULTRATERMINAL_SERVER_H
#define ULTRATERMINAL_SERVER_H

#include <thread>
#include <atomic>

class Server {

private:

    std::thread server_thread;

    std::atomic_bool interrupted = false;

    void ServerThread();

public:

    Server() : server_thread() {}

    ~Server(){
        interrupted = true;
        if(server_thread.joinable()) server_thread.join();
    }

    void Start();

    void Stop();

};


#endif //ULTRATERMINAL_SERVER_H
