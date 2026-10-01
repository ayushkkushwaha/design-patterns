#pragma once
class Command
{
public:
    virtual void prepareDish() = 0;
    virtual ~Command() = default;
};