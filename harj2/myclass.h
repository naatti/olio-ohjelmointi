#ifndef MYCLASS_H
#define MYCLASS_H

class myClass{
public:
    myClass();
    ~myClass();
    string publicTextToPrint;
    void publicFunction(string);
private:
    string privateTextToPrint;
    void privateFunction();
protected:
    string protectedTextToPrint;
    void protectedFunction();
};

#endif // MYCLASS_H
