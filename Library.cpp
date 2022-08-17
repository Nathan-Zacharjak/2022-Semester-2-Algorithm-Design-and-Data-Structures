#include "Library.h"
#include "Document.h"
#include <vector>

using namespace std;

void Library::addDocument(Document* doc){
    documents.push_back(doc);
}

bool Library::hasDocument(int id){
    int size = documents.size();

    for (int i = 0; i < size; i++){

        if (documents.at(i)->getDocumentID() == id) {
            return true;
        }   
    }

    return false;
}