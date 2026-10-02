#include "cardinsertedstate.h"
#include "authenticatedstate.h"
#include "idlestate.h"
#include "atm.h"

#include <iostream>

using namespace std;

void CardInsertedState::insertCard(ATM *atm)
{
    cout << "Card already Inserted" << endl;
}

void CardInsertedState::enterPin(ATM *atm)
{
    cout << "Pin Verified Successfully." << endl;
    atm->setState(new AuthenticatedState());
}

void CardInsertedState::withdraw(ATM *atm)
{
    cout << "Please enter PIN first" << endl;
}

void CardInsertedState::ejectCard(ATM *atm)
{
    cout << "Card ejected !" << endl;
    atm->setState(new IdleState());
}