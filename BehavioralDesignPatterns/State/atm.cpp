#include "atm.h"
#include "atmstate.h"

ATM::ATM(AtmState *initialState)
    : currState(initialState)
{
}

void ATM::setState(AtmState *newState)
{
    currState = newState;
}

void ATM::insertCard()
{
    currState->insertCard(this);
}

void ATM::enterPin()
{
    currState->enterPin(this);
}

void ATM::withdraw()
{
    currState->withdraw(this);
}

void ATM::ejectCard()
{
    currState->ejectCard(this);
}