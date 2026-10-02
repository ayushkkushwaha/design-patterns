#pragma once

class AtmState;

class ATM
{
    AtmState *currState;

public:
    ATM(AtmState *initialState);

    void setState(AtmState *newState);

    void insertCard();
    void enterPin();
    void withdraw();
    void ejectCard();
};
// The ATM does not check whether it is idle, authenticated, or processing a transaction.
// It simply delegates the request to the current state.
// This delegation is the core idea of the State Pattern.
