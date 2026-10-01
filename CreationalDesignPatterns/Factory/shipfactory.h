#include "transportfactory.h"
#include "transport.h"
#include "ship.h"

class ShipFactory : public TransportFactory
{
public:
    Transport *createTransport() override
    {
        return new Ship();
    }
};