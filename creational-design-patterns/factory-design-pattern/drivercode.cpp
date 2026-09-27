#include "bits/stdc++.h"
#include "client.h"
#include "transportfactory.h"
#include "shipfactory.h"
#include "trainfactory.h"
#include "carfactory.h"

using namespace std;

int main(){
    TransportFactory* _shipFactory = new ShipFactory();
    Client* _client = new Client(_shipFactory);
    Transport* _shipTransport = _client->getTransport();
    _shipTransport->travel();

    delete _shipFactory;
    delete _shipTransport;

    TransportFactory* _trainFactory = new TrainFactory();
    _client = new Client(_trainFactory);
    Transport* _trainTransport = _client->getTransport();
    _trainTransport->travel();

    delete _trainTransport;
    delete _trainFactory;

    TransportFactory* _carFactory = new CarFactory();
    _client = new Client(_carFactory);
    Transport* _carTransport = _client->getTransport();
    _carTransport->travel();

    return 0;
}