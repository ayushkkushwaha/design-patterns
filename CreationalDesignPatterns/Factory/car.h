#include "transport.h"
#include "bits/stdc++.h"

class Car : public Transport
{
public:
    void travel() override{
        std::cout << "Travel Mode : Car" << std::endl;
    }
};