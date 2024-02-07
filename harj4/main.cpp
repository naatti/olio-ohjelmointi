#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

//
// Harj 4 teht 1 alkaa
//

#include <iostream>
using namespace std;

class Bicycle {
public:
    Bicycle();
    ~Bicycle();
};

class Storage {
public:
    Storage();
    ~Storage();
private:
    Bicycle a;
    Bicycle b;
    Bicycle c;
};

Bicycle::Bicycle()
{
    cout<<"A new Bicycle created"<<endl;
}

Bicycle::~Bicycle()
{
    cout<<"Bicycle deleted "<<endl;
}

Storage::Storage()
{
    cout<<"A new bicycle storage created"<<endl;
}

Storage::~Storage()
{
    cout<<"Bicycle storage deleted"<<endl;
}

//
// Harj 4 teht 1 loppuu
// Harj 4 teht 2 alkaa
//

class Bicycle {
public:
    Bicycle();
    ~Bicycle();
};

class Fatbike: public Bicycle {
public:
    Fatbike();
    ~Fatbike();
};

class Storage {
public:
    Storage();
    ~Storage();
private:
    Bicycle a;
    Bicycle b;
    Bicycle c;
    Fatbike d;
    Fatbike e;
};

Bicycle::Bicycle()
{
    cout<<"A new Bicycle created"<<endl;
}

Bicycle::~Bicycle()
{
    cout<<"Bicycle deleted "<<endl;
}

Fatbike::Fatbike()
{
    cout<<"A new Fatbike created"<<endl;
}

Fatbike::~Fatbike()
{
    cout<<"Fatbike deleted "<<endl;
}

Storage::Storage()
{
    cout<<"A new bicycle storage created"<<endl;
}

Storage::~Storage()
{
    cout<<"Bicycle storage deleted"<<endl;
}

//
// Harj 4 teht 2 loppuu
// Harj 4 teht 3 alkaa
//

#include <iostream>
using namespace std;

class ClassB {
public:
    ClassB();
    void printAssosiation(void);
    void printAggregation(void);
    void printComposition(void);
};


class ClassA {
public:
    ClassA();
    void print1(ClassB B);
    void print2(ClassB &B);
    void print3();
};



ClassA::ClassA()
{

}

void ClassA::print1(ClassB B)
{
    B.printAssosiation();
}

void ClassA::print2(ClassB & B)
{
    B.printAggregation();
}

void ClassA::print3()
{
    ClassB B;
    B.printComposition();
}


ClassB::ClassB()
{

}

void ClassB::printAssosiation()
{
    cout<<"This is assosiation"<< endl;
}

void ClassB::printAggregation()
{
    cout<<"This is aggregation"<< endl;
}

void ClassB::printComposition()
{
    cout<<"This is composition"<< endl;
}

int main()
{

    ClassA objectA;
    ClassB objectB;
    ClassB & refB = objectB;


    objectA.print1(objectB);
    objectA.print2(refB);
    objectA.print3();

    return 0;

}

//
// Harj 4 teht 3 loppuu
//
