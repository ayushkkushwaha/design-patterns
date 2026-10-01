#include "kitchen.h"
#include "command.h"

class BurgerCommand : public Command
{
    Kitchen* kitchen;
public:
    BurgerCommand(Kitchen* kitchen) : kitchen(kitchen){}
    void prepareDish() override
    {
        kitchen->prepareBurger();
    }
};