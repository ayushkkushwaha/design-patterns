#include "transport.h"

class Train : public Transport
{
public:
    void travel() override
    {
        std::cout << "Travel Mode : Train" << std::endl;
    }
};