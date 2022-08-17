#ifndef BOOK_H
#define BOOK_H

#include "Document.h"

class Book: public Document{
public:
    Book(int id);
    int getDocumentID();
};

#endif