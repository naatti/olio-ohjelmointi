#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

//
// Harj3, teht1 alkaa
//

class BasicALU {
public:
    BasicALU();
    double sum(double, double);
    double sub(double, double);
    double mul(double, double);
    double div(double, double);
};

BasicALU::BasicALU() {
    cout << "BasicALU constructor!!" << endl;
}

double BasicALU::sum(double luku1, double luku2) {
    return luku1 + luku2;
};

double BasicALU::sub(double luku1, double luku2) {
    return luku1 - luku2;
};

double BasicALU::mul(double luku1, double luku2) {
    return luku1 * luku2;
};

double BasicALU::div(double luku1, double luku2) {
    return luku1 / luku2;
};

class Calculator : public BasicALU {
private:
    double op1;
    double op2;
    double result;
    char operation;
public:
    Calculator();
    void inputOperands(void);
    void calculateResult(void);
    void showResults(void);
};

//
// Yllä omaa koodia, alla valmista pohjaa
//

Calculator::Calculator()
{
    cout<<"Calculator constructor!!"<<endl;
}

void Calculator::inputOperands()
{

    cout<<"Give first operand"<<endl;
    cin>>op1;

    cout<<"Give operation +, -, * or / "<<endl;
    cin>>operation;

    cout<<"Give second operand"<<endl;
    cin>>op2;
}

void Calculator::calculateResult()
{
    switch (operation) {
    case '+':
        result = sum(op1,op2);
        break;
    case '-':
        result = sub(op1,op2);
        break;
    case '*':
        result = mul(op1,op2);
        break;
    case '/':
        result = div(op1,op2);
        break;
    default:
        cout<<"No such operation!"<<endl;

    }
}

void Calculator::showResults()
{
    cout<<op1 << operation << op2 << " = " << result << endl;
}


//
// Harj3, teht1 loppuu
// Harj3, teht2 alkaa
//

class GrandFather {
public:
    string Grandname;
    GrandFather();
    void setGrandName(string);
    string getGrandName(void);
};

class Father : public GrandFather {
public:
    string Fathername;
    Father();
    void setFatherName(string);
    string getFatherName(void);
};

class Son : public Father {
public:
    string name;
    Son(string);
    void setName(string);
    string getName(void);
};

GrandFather::GrandFather()
{
    cout<<"GrandFather is born!"<<endl;
}

void GrandFather::setGrandName(string n)
{
    Grandname = n;
}

string GrandFather::getGrandName()
{
    return Grandname;
}

Father::Father()
{
    cout<<"Father is born!"<<endl;
}

void Father::setFatherName(string n)
{
    Fathername = n;
}

string Father::getFatherName()
{
    return Fathername;
}

Son::Son(string n)
{
    cout<<"Son "<< n << " is born!"<<endl;
    setName(n);
    setFatherName(n+"'s Father");
    setGrandName(n+"'s GrandFather");
}

void Son::setName(string n)
{
    name = n;
}

string Son::getName()
{
    return name;
}

//
// Harj3, teht2 loppuu
//
