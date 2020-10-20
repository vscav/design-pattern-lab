#ifndef STRATEGY_PATTERN_CONCRETESTRATEGYA_HPP
#define STRATEGY_PATTERN_CONCRETESTRATEGYA_HPP

#include <algorithm>
#include <string>
#include <vector>

#include "./Strategy.hpp"

/**
 * Concrete Strategies implement the algorithm while following the base Strategy
 * interface. The interface makes them interchangeable in the Context.
 */
class ConcreteStrategyA : public Strategy {
public:

    std::string DoAlgorithm(const std::vector<std::string> &data) const override;
    
};

#endif //#ifndef STRATEGY_PATTERN_CONCRETESTRATEGYA_HPP