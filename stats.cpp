#include "pch.h"
#include "stats.h"
#include <numeric>

using namespace Statistics;


Stats Statistics::ComputeStatistics(const std::vector<double>&vecValues) {
	//Implement statistics here

	Stats stat;
	double sum = accumulate(vecValues.begin(), vecValues.end(), 0.0);
	stat.average = (sum / vecValues.size());

	stat.max = *max_element(vecValues.begin(), vecValues.end());
	stat.min = *min_element(vecValues.begin(), vecValues.end());

	return stat;
		
}