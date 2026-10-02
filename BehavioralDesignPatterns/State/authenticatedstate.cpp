#include "authenticatedstate.h"
#include "transactionstate.h"
#include "idlestate.h"
#include "atm.h"

#include <iostream>

using namespace std;

void AuthenticatedState::insertCard(ATM *atm)
{
    cout << "Card already inserted" << endl;
}

void AuthenticatedState::enterPin(ATM *atm)
{
    cout << "Already Verified." << endl;
}

void AuthenticatedState::withdraw(ATM *atm)
{
    cout << "Withdrawal initiated..." << endl;
    atm->setState(new TransactionState());
}

void AuthenticatedState::ejectCard(ATM *atm)
{
    cout << "Card ejected..." << endl;
    atm->setState(new IdleState());
}
