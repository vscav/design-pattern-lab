#ifndef STRATEGY_PATTERN_CONTEXT_HPP
#define STRATEGY_PATTERN_CONTEXT_HPP

#include <iostream>
#include <vector>

#include "./Strategy.hpp"

/**
 * The Context defines the interface of interest to clients.
 */
class Context {
    /**
     * @var Strategy The Context maintains a reference to one of the Strategy
     * objects. The Context does not know the concrete class of a strategy. It
     * should work with all strategies via the Strategy interface.
     */
private:

    Strategy *_strategy;

    /**
     * Usually, the Context accepts a strategy through the constructor, but also
     * provides a setter to change it at runtime.
     */
public:

    Context(Strategy *strategy = nullptr);

    ~Context();

    /**
     * Usually, the Context allows replacing a Strategy object at runtime.
     */
    void set_strategy(Strategy *strategy);

    /**
     * The Context delegates some work to the Strategy object instead of
     * implementing +multiple versions of the algorithm on its own.
     */
    void DoSomeBusinessLogic() const;

};

#endif //STRATEGY_PATTERN_CONTEXT_HPP