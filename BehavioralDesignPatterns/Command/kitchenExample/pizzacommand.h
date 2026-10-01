#include "kitchen.h"
#include "command.h"

class PizzaCommand : public Command
{
    Kitchen* kitchen;
public:
    PizzaCommand(Kitchen* kitchen) : kitchen(kitchen){}
    void prepareDish() override
    {
        kitchen->preparePizza();
    }
};