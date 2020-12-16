//Single - Level Inheritance

using namespace std;
#include<iostream>
#include<conio.h>

class Karad                                                           //Base Class
{
    public:
            int a,b;

            Karad()
            {
                cout<<"\nKarad :: Constructor"<<endl;
            }
            ~Karad()
            {
                cout<<"\nKarad :: Destructor"<<endl;
            }

            void Fun()
            {
                cout<<"\nKarad :: Fun()..."<<endl;
            }
};

class Pune : public Karad                                           //Derived Class
{
    public:
            int x,y;

            Pune();
            ~Pune();

            void Gun();
};

Pune :: Pune()
{
    cout<<"\nPune :: Constructor"<<endl;
}
Pune :: ~Pune()
{
    cout<<"\nPune :: Destructor"<<endl;
}

void Pune :: Gun()
{
    cout<<"\nPune :: Gun()..."<<endl;
}

//main() Function Definition

int main()
{
    Karad k;
    getch();

    Pune p;
    getch();

    cout<<endl<<sizeof(k)<<endl;
    cout<<endl<<sizeof(p)<<endl;

    getch();
    return 0;
}
