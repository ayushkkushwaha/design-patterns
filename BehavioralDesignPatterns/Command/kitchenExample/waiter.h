#include "kitchen.h"
#include "command.h"
#include "bits/stdc++.h"
using namespace std;

class Waiter{
public:
    void takeOrder(Command* cmd){
        cout << "Order Received" << endl;
        cmd->prepareDish();
    }
};