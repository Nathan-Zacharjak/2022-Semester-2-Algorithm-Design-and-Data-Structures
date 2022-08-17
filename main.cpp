#include "Library.h"
#include "Book.h"
#include <iostream>

using namespace std;

int main(void){
    Library* lib1 = new Library;
    Book* bk1 = new Book(42);

    // addDocument is a function demonstrating subtype polymorphism
    lib1->addDocument(bk1);
    cout << lib1->hasDocument(bk1->getDocumentID()) << endl;

    return 0;
}
