#ifndef across_segments_H
#define across_segments_H
#include "load.h"

void run_model_accross_segments(vector<segment*>, 
	int , int, int, int, double, 
	double, double, double, int, string, double, string,
	bool, int);

void free_segments(vector<segment*>);


#endif