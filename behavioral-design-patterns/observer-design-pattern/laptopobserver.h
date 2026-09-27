#pragma once
#include "observer.h"
#include "bits/stdc++.h"

class LaptopObserver : public Observer
{

    double temp;
    double humidity;

public:
    void update(double temp, double humidity) override
    {
        this->temp = temp;
        this->humidity = humidity;
        show();
    }

    void show()
    {
        std::cout << "LaptopScreen :" << std::endl
                  << std::endl;
        std::cout << "\n---------------------------\n";
        std::cout << "        Weather Station    " << std::endl;
        std::cout << "    Temperature : " << this->temp << std::endl;
        std::cout << "    Humidity    : " << this->humidity << std::endl;
        std::cout << "\n---------------------------\n";
    }
};