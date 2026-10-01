#include "bits/stdc++.h"
#include "command.h"
#include "pizzacommand.h"
#include "burgercommand.h"
#include "waiter.h"

using namespace std;

int main(){
    Kitchen kitchen;
    PizzaCommand pizza(&kitchen);
    BurgerCommand burger(&kitchen);
    
    Waiter waiter;
    waiter.takeOrder(&pizza);
    waiter.takeOrder(&burger);

    return 0;
}