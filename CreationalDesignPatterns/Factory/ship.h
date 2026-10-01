#include "transport.h"
#include "bits/stdc++.h"

class Ship : public Transport
{
public:
    void travel() override
    {
        std::cout << "Travel Mode : Ship" << std::endl;
    }
};