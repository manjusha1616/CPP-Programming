//Multilevel Inheritance

using namespace std;
#include<iostream>
#include<conio.h>

class A1                                                           //Base Class
{
    public:
            int a,b;

            A1()
            {
                cout<<"\nA1 :: Constructor"<<endl;
            }
            ~A1()
            {
                cout<<"\nA1 :: Destructor"<<endl;
            }

            void Fun()
            {
                cout<<"\nA1 :: Fun()..."<<endl;
            }
};

class B1 : public A1                                             //Derived Class 1
{
    public:
            int x,y;

            B1()
            {
                cout<<"\nB1 :: Constructor"<<endl;
            }
            ~B1()
            {
                cout<<"\nB1 :: Destructor"<<endl;
            }

            void Gun()
            {
                cout<<"\nB1 :: Gun()..."<<endl;
            }
};

class C1 : public B1                                            //Derived Class 2
{
    public:
            int p,q;

            C1()
            {
                cout<<"\nC1 :: Constructor"<<endl;
            }
            ~C1()
            {
                cout<<"\nC1 :: Destructor"<<endl;
            }

            void Sun()
            {
                cout<<"\nC1 :: Sun()..."<<endl;
            }
};

//main() Function Definition

int main()
{
    C1 Obj;
    getch();

    cout<<endl<<sizeof(Obj)<<endl;

    getch();
    return 0;
}
