#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Document.h"

class Library{
private:
    std::vector<Document*> documents;
public:
    void addDocument(Document* doc);
    bool hasDocument(int id);
};

#endif