#pragma once

#include <string>

#include "HashClient.h"

namespace netOptix
{
    class TerminalUI 
    {
    public:
        explicit TerminalUI(HashClient& hashClient);
        ~TerminalUI()= default;
        void run();

    private:
        HashClient& mHashClient;
    };
}

