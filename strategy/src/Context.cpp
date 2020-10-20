#include <iostream>
#include <vector>

#include "../header/Context.hpp"

 Context::Context(Strategy *strategy)
 : _strategy(strategy)
 {}

 Context::~Context() {
    delete _strategy;
 }

 void Context::set_strategy(Strategy *strategy) {
    delete _strategy;
    _strategy = strategy;
 }

 void Context::DoSomeBusinessLogic() const {
    std::cout << "Context: Sorting data using the strategy (not sure how it'll do it)\n";
    std::string result = _strategy->DoAlgorithm(std::vector<std::string>{"a", "e", "c", "b", "d"});
    std::cout << result << "\n";
 }