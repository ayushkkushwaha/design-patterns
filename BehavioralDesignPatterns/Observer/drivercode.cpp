#include "bits/stdc++.h"
#include "weatherstation.h"
#include "laptopobserver.h"
#include "mobileobserver.h"
#include "observer.h"

using namespace std;

int main()
{
    LaptopObserver _lapObs;
    MobileObserver _MobObs;

    WeatherStation ws;
    
    ws.addObserver(&_lapObs);
    ws.addObserver(&_MobObs);

    for(int i=0;i<500;i++){
        ws.setWeather(20 + i, 30 + i);
        std::this_thread::sleep_for(std::chrono::seconds(3));
    }


    return 0;
}