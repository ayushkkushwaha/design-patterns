#include "transactionstate.h"
#include "idlestate.h"
#include "atm.h"

#include <iostream>

using namespace std;

void TransactionState::insertCard(ATM *atm)
{
    cout << "Card already Inserted" << endl;
}

void TransactionState::enterPin(ATM *atm)
{
    cout << "Pin Already Verified" << endl;
}

void TransactionState::withdraw(ATM *atm)
{
    cout << "Another Transaction not allowed" << endl;
}

void TransactionState::ejectCard(ATM *atm)
{
    cout << "Transaction Succesfully. Card ejected !" << endl;
    atm->setState(new IdleState());
}
