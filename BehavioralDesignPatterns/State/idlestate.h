#pragma once

#include "atmstate.h"

class CardInsertedState;

class IdleState : public AtmState
{
public:
    void insertCard(ATM *atm) override;
    void enterPin(ATM *atm) override;
    void withdraw(ATM *atm) override;
    void ejectCard(ATM *atm) override;
};