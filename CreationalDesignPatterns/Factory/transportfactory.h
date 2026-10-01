#pragma once

#include "transport.h"

class TransportFactory
{
public:
    virtual Transport* createTransport() = 0;
};