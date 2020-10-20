#ifndef STRATEGY_PATTERN_STRATEGY_HPP
#define STRATEGY_PATTERN_STRATEGY_HPP

/**
 * The Strategy interface declares operations common to all supported versions
 * of some algorithm.
 *
 * The Context uses this interface to call the algorithm defined by Concrete
 * Strategies.
 */
class Strategy {
public:

    virtual ~Strategy() {}

    virtual std::string DoAlgorithm(const std::vector<std::string> &data) const = 0;
    
};

#endif //STRATEGY_PATTERN_STRATEGY_HPP