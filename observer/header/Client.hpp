#ifndef OBSERVER_PATTERN_CLIENT_1_HPP
#define OBSERVER_PATTERN_CLIENT_1_HPP

#include <iostream>

#include "Observer.hpp"

/**
 * a client that implements the Observer interface
 */
class Client : public Observer {
private :

    int _id;

public:

    Client(int id);

    virtual void update(float temp, float humidity, float pressure) override;

};


#endif //OBSERVER_PATTERN_CLIENT_1_HPP