#pragma once

#include <string>

namespace netOptix
{
    class HashClient 
    {
    public:
        HashClient();
        HashClient(const char &serverIp, int serverPort, size_t maxMessageLength);
        ~HashClient()= default;
        std::string hashMessage(const std::string &msg);

    private:
        const char *mServerIp;
        int mServerPort;
        size_t mBufferSize;
        int getSocketConnection();
    };
}


