#include "../header/Client.hpp"

void Client::update(float temp, float humidity, float pressure) {
    std::cout << "---Client (" << _id << ") Data---\tTemperature: " << temp
              << "\tHumidity: " << humidity
              << "\tPressure: " << pressure
              << std::endl;
}

Client::Client(int id) {
    _id = id;
}