#include "stats.h"

Stats Statistics::ComputeStatistics(const std::vector<double>&vecValues ) {
    //Implement statistics here
    double sum = 0;
    for(int i = 0;i< vecValues.size();i++){
        double sum = sum + vecValues.at[i];
    }
    Stats.average = sum/(vecValues.size());
    Stats.Min = vecValues.[0];
    Stats.Max = vecValues.[vecValues.size()];
}
