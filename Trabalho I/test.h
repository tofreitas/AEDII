#include "vetor.h"
#pragma once

#define __SEARCH__ARRAY 1
#define __SEARCH__ARRAY__AND__LIST 2
#define __SORT 3
#define __NUMBER__TEST 30
#define __RAND__KEY ((rand() % (__MAXSIZE) << 2) + 1)
#define KGRN  "\x1B[32m"
#define KWHT  "\x1B[37m"


typedef struct __results{

	double r_sort[__NUMBER__TEST + 3][3];
	double r_searchs[__NUMBER__TEST + 2][2];

} r_results;

extern r_results results;
void progress__bar(const int __count, const int __max);
void result(r_results *, int __execution__type);
