#pragma once

class ATM;
class AtmState
{
public:
    virtual void insertCard(ATM *atm) = 0;
    virtual void enterPin(ATM *atm) = 0;
    virtual void withdraw(ATM *atm) = 0;
    virtual void ejectCard(ATM *atm) = 0;

    virtual ~AtmState() = default;
};