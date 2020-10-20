#include <algorithm>
#include <string>
#include <vector>

#include "../header/ConcreteStrategyA.hpp"

std::string ConcreteStrategyA::DoAlgorithm(const std::vector<std::string> &data) const {
    std::string result;
    std::for_each(std::begin(data), std::end(data), [&result](const std::string &letter) {
        result += letter;
    });
    std::sort(std::begin(result), std::end(result));

    return result;
}