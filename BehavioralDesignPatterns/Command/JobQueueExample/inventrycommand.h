#pragma once
#include "command.h"
#include "inventryservice.h"

class InventryCommand : public Command{
    InventryService* inventry;
public:
    InventryCommand(InventryService* inventry) : inventry(inventry){

    }

    void run() override{
        inventry->update();
    }
};