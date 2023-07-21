#include <vector>

namespace Statistics {
    // define the Stats structure here. See the tests to infer its properties
    struct Stats{
    double average;
    double Max;
    double Min;
    };
    Stats ComputeStatistics(const std::vector<double>& vecValues );
}
