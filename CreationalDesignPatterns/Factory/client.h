#include "transportfactory.h"
#include "transport.h"

class Client
{
    Transport *pTransport;
public:
    Client(TransportFactory *factory)
    {
        pTransport = factory->createTransport();
    }

    ~Client()
    {
        delete pTransport;
    }

    Transport *getTransport()
    {
        return pTransport;
    }
};