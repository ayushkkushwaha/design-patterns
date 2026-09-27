#include "transportfactory.h"
#include "car.h"

class CarFactory : public TransportFactory{

    Transport* createTransport() override{
        return new Car();
    }
};