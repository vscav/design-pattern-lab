#include <iostream>

#include "./header/WeatherData.hpp"
#include "./header/Client.hpp"

int main() {
    WeatherData weatherStation;
    Client one(1), two(2), three(3);

    float temp, humidity, pressure;

    weatherStation.registerObserver(&one);
    weatherStation.registerObserver(&two);
    weatherStation.registerObserver(&three);

    std::cout << "Enter Temperature, Humidity, Pressure (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure;

    weatherStation.setState(temp, humidity, pressure);

    weatherStation.removeObserver(&two);

    std::cout << "\n\nEnter Temperature, Humidity, Pressure (seperated by spaces) << ";
    std::cin >> temp >> humidity >> pressure;

    weatherStation.setState(temp, humidity, pressure);

    return 0;
}

// g++ -Wall -O2 -std=c++11 main.cpp src/Client.cpp src/WeatherData.cpp -o main
// ./main