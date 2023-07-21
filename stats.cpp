#include "stats.h"


template< typename T>
Stats Statistics::ComputeStatistics(const std::vector<T>&vecValues ) {
    //Implement statistics here
   double sum = 0.0;
	Stats stat;
	for(const T &i vecValues) {
		 sum += (double)i;
	}
	stat.average = sum / (vecValues.size());
	stat.min = min_element(vecValues.begin(),vecValues.end());
	stat.max = max_element(vecValues.begin(), vecValues.end());
}
