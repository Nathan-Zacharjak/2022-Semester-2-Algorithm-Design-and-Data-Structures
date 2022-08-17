#include "Book.h"

Book::Book(int _id):Document(_id){}

int Book::getDocumentID(){
    return id;
}