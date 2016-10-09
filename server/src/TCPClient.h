//
// Created by Vlad on 09.10.2016.
//

#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <SDL_net.h>

class TCPClient {
private:
    bool isConnected = false;

    std::string ip;
    int32_t port;

    int32_t waitTime = 60000;
    const int bufferSize = 2048;

    // Holds the address and port to the server
    IPaddress ipAddress;
    TCPsocket tcpSocket;

public:
    TCPClient(const std::string &ip_, int32_t port_);

    TCPClient (TCPsocket newSocket);

    //Initialization with current ip and port
    bool setupIpAddress();

    bool openConnectionToServer();

    void Close();

    bool IsConnected();
};