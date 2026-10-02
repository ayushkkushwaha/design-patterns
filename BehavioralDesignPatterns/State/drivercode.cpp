#include <bits/stdc++.h>
#include "atm.h"
#include "idlestate.h"
#include "atmstate.h"

using namespace std;

int main(){

    ATM atm(new IdleState());
    atm.insertCard();
    atm.ejectCard();

    return 0;
}