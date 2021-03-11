#include <memory>
#include "TerminalUI.h"
#include <iostream>

using namespace netOptix;

int main() 
{
    try
    {
        auto hashClient = std::make_unique<HashClient>();
        std::make_unique<TerminalUI>(*hashClient)->run();
    }
    catch (std::runtime_error e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
