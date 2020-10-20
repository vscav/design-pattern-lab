#ifndef STRATEGY_PATTERN_CONCRETESTRATEGYB_HPP
#define STRATEGY_PATTERN_CONCRETESTRATEGYB_HPP

#include <algorithm>
#include <string>
#include <vector>

#include "./Strategy.hpp"

class ConcreteStrategyB : public Strategy {

    std::string DoAlgorithm(const std::vector<std::string> &data) const override;
    
};

#endif //STRATEGY_PATTERN_CONCRETESTRATEGYB_HPP