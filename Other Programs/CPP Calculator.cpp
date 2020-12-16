//CPP Calculator
using namespace std;
#include<iostream>
#include<conio.h>

class Calculator
{
    public:
        int No1,No2,Ans;

        void Add();

        void Sub();

        void Mult();

        void Div();
};

void Calculator::Add()
{
    Ans=No1+No2;
}

void Calculator::Sub()
{
    Ans=No1-No2;
}

void Calculator::Mult()
{
    Ans=No1*No2;
}

void Calculator::Div()
{
    Ans=No1/No2;
}

int main()
{
    Calculator obj1,obj2,obj3,obj4;

    obj1.No1=10;
    obj1.No2=20;

    obj2.No1=50;
    obj2.No2=25;

    obj3.No1=10;
    obj3.No2=5;

    obj4.No1=100;
    obj4.No2=10;

    obj1.Add();

    cout<<"Addition is => "<<obj1.Ans<<endl<<endl;

    obj2.Sub();

    cout<<"Subtraction is => "<<obj2.Ans<<endl<<endl;

    obj3.Mult();

    cout<<"Multiplication is => "<<obj3.Ans<<endl<<endl;

    obj4.Div();

    cout<<"Division is => "<<obj4.Ans<<endl<<endl;

    getch();
    return 0;
}
