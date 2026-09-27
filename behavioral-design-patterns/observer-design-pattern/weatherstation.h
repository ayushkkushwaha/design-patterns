#include "observer.h"
#include "subject.h"
#include "bits/stdc++.h"
using namespace std;

class WeatherStation : public Subject
{
    double temp;
    double humidity;
    vector<Observer *> _observers;

public:
    void addObserver(Observer *observer) override
    {
        _observers.push_back(observer);
    }

    void removeObserver(Observer *observer) override
    {
        _observers.erase(remove(_observers.begin(), _observers.end(), observer), _observers.end());
    }

    void notifyObservers() override
    {
        for (auto observer : _observers)
        {
            observer->update(temp, humidity);
        }
    }

    void setWeather(double temp,double humidity)
    {
        this->temp = temp;
        this->humidity = humidity;
        notifyObservers();
    }
};