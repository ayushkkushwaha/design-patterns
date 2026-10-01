#include "transport.h"
#include "bits/stdc++.h"

class PublicBus : public Transport
{
public:
    void travel() override{
        std::cout << "Travel Mode : Public bus" << std::endl;
    }
};