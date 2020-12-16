//According To Access Specifiers - PRIVATE Inheritance

using namespace std;
#include<iostream>
#include<conio.h>

class Base                                                           //Base Class
{
    public:
            int a,b;

            Base()
            {
                cout<<"\nBase :: Constructor"<<endl;
            }

            ~Base()
            {
                cout<<"\nBase :: Destructor"<<endl;
            }

    private:
            int i,j;

    protected:
            int k,l;
};

class Derived : private Base                                             //Derived Class
{
    public:
            int x;

            Derived()
            {
                x = y = z = 0;

                cout<<"\nDerived :: Constructor"<<endl;
            }

            ~Derived()
            {
                cout<<"\nDerived :: Destructor"<<endl;
            }

    private:
            int y;

    protected:
            int z;
};


//main() Function Definition

int main()
{
    Derived Obj;
    getch();

    //Obj.a = 21;                 //Not Allowed Bcoz Class Is Derived Privately
    //Obj.b = 51;                 //Not Allowed Bcoz Class Is Derived Privately

    //Obj.i = 50;                 //Not Allowed Bcoz Private
    //Obj.j = 60;                 //Not Allowed Bcoz Private

    //Obj.k = 100;                //Not Allowed Bcoz Protected
    //Obj.l = 105;                //Not Allowed Bcoz Protected

    Obj.x = 5;

    //Obj.y = 10;                 //Not Allowed Bcoz Private
    //Obj.z = 15;                 //Not Allowed Bcoz Protected

    cout<<"\n Value => x = "<<Obj.x<<endl;

    cout<<"\n Size Of Given Object => "<<sizeof(Obj)<<endl;         //36 =>As Size Of Obj = Sum Of All Non-Static Characteristics of Base as Well as derived
                                                                    //i.e a,b,i,j,k,l => Inside Base Class 6 int Characteristics = 6 * 4 => 24 Bytes
                                                                    // & x,y,z => Inside Derived Class 3 int Characteristics = 3 * 4 = 12 Bytes


    getch();
    return 0;
}
