#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <vector>
#include "Sort.h"

class BubbleSort: public Sort{
private:
    
public:
    std::vector<int> sort(std::vector<int> list);
};


#endif