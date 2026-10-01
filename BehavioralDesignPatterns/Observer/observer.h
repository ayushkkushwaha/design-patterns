#pragma once

class Observer{
public:
    virtual void update(double temp,double humidity) = 0;
};