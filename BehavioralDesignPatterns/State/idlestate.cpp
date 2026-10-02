#include "idlestate.h"
#include "cardinsertedstate.h"
#include "atm.h"

#include <iostream>

using namespace std;

void IdleState::insertCard(ATM *atm)
{
    cout << "Card Inserted Successfully" << endl;
    atm->setState(new CardInsertedState());
}

void IdleState::enterPin(ATM *atm)
{
    cout << "Card not inserted." << endl;
}

void IdleState::withdraw(ATM *atm)
{
    cout << "Can't Withdraw. Insert Card" << endl;
}

void IdleState::ejectCard(ATM *atm)
{
    cout << "No card inserted." << endl;
}
