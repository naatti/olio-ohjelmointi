#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

//
// Harj2, teht1
//

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

//
// Harj2, teht1 päättyy
// Harj2, teht2 alkaa
//

#ifndef MYCLASS_H
#define MYCLASS_H

class myClass {
public:
    myClass();
    int result;
    int calculateResult();
private:
    int number1;
    int number2;
protected:
    void setNumber1(int);
    void setNumber2(int);
};

#endif // MYCLASS_H

//
// Harj2, teht2 päättyy
// Harj2, teht3 alkaa
//

class Vehicle {
private:
    int speed;
    string name;
public:
    int getSpeed() {
        return speed;
    };
    void setSpeed(int value) {
        speed = value;
    };
    string getName() {
        return name;
    };
    void setName(string value) {
        name = value;
    };
};

//
// Harj2, teht3 päättyy
// Harj2, teht4 alkaa
//

class Apartment {
private:
    int numOfTenants;
    int area;
public:
    Apartment(int tenants, int size){
        numOfTenants = tenants;
        area = size;
    };
    int heatingCost() {
        return numOfTenants * area;
    };
};

//
// Harj2, teht4 päättyy
//
