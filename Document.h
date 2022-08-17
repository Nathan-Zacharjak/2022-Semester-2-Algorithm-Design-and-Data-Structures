#ifndef DOCUMENT_H
#define DOCUMENT_H

class Document{
protected:
    int id;
public:
    Document(int _id);
    virtual int getDocumentID() = 0;
};

#endif