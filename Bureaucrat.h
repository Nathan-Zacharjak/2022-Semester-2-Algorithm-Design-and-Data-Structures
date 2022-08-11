#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Computer.h"

class Bureaucrat: public Computer{
    public:
    Bureaucrat();
    char makeMove();
};

#endif