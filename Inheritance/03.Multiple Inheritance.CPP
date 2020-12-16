//Multiple Inheritance

using namespace std;
#include<iostream>
#include<conio.h>

class B1                                                           //Base Class 1
{
    public:
            int a,b;

            B1()
            {
                cout<<"\nB1 :: Constructor"<<endl;
            }
            ~B1()
            {
                cout<<"\nB1 :: Destructor"<<endl;
            }

            void Fun()
            {
                cout<<"\nB1 :: Fun()..."<<endl;
            }
};

class B2                                                        //Base Class 2
{
    public:
            int x,y;

            B2()
            {
                cout<<"\nB2 :: Constructor"<<endl;
            }
            ~B2()
            {
                cout<<"\nB2 :: Destructor"<<endl;
            }

            void Gun()
            {
                cout<<"\nB2 :: Gun()..."<<endl;
            }
};

class D1 : public B1,B2                                            //Derived Class
{
    public:
            int p,q;

            D1()
            {
                cout<<"\nD1 :: Constructor"<<endl;
            }
            ~D1()
            {
                cout<<"\nD1 :: Destructor"<<endl;
            }

            void Sun()
            {
                cout<<"\nD1 :: Sun()..."<<endl;
            }
};

//main() Function Definition

int main()
{
    D1 Obj;
    getch();

    cout<<endl<<sizeof(Obj)<<endl;

    getch();
    return 0;
}
