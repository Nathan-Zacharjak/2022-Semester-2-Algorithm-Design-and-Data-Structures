#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H

#include <vector>

#include "FilterGeneric.h"

class FilterNonPositive: public FilterGeneric{
private:
    bool g(int input);
public:
    
};

#endif