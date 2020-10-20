#include <algorithm>
#include <string>
#include <vector>

#include "../header/ConcreteStrategyB.hpp"

std::string ConcreteStrategyB::DoAlgorithm(const std::vector<std::string> &data) const {
    std::string result;
    std::for_each(std::begin(data), std::end(data), [&result](const std::string &letter) {
        result += letter;
    });
    std::sort(std::begin(result), std::end(result));
    for (int i = 0; i < result.size() / 2; i++)
    {
        std::swap(result[i], result[result.size() - i - 1]);
    }

    return result;
}