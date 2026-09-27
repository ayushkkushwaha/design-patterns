#include "transportfactory.h"
#include "train.h"

class TrainFactory : public TransportFactory{
public:
    Transport* createTransport() override{
        return new Train();
    }
};