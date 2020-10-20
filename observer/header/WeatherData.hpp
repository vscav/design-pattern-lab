#ifndef OBSERVER_PATTERN_WEATHERDATA_HPP
#define OBSERVER_PATTERN_WEATHERDATA_HPP

#include <vector>
#include <algorithm>
#include <iostream>

#include "Subject.hpp"
#include "Observer.hpp"

/**
 * A concrete implementation of the Subject interface
 */
class WeatherData : public Subject {
private:

    std::vector<Observer*> observers;

    float _temp = 0.0f;
    float _humidity = 0.0f;
    float _pressure = 0.0f;

public:

    void registerObserver(Observer *observer) override;

    void removeObserver(Observer *observer) override;

    void notifyObservers() override;

    /**
     * Set the new state of the weather station
     * @param temp new temperature
     * @param humidity new humidity
     * @param pressure new pressure
     */
    void setState(float temp, float humidity, float pressure);

};


#endif //OBSERVER_PATTERN_WEATHERDATA_HPP