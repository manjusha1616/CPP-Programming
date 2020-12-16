//Copy Constructor

using namespace std;
#include<iostream>
#include<conio.h>

class Constructor
{
        public:
                int No_1,No_2,Res;                                          //Public Data Members Or Characteristics Declaration

                int Add()
                {
                    cout<<"\n\nInside Public Add() Function Of Our Class...";

                    Res = No_1 + No_2;
                    return Res;
                }

                Constructor(int N1, int N2)                //Parameterized Constructor
                {
                        No_1 = N1;
                        No_2 = N2;
                        Res = 0;

                        cout<<"\n\nInside Parameterized Constructor Of Our Class";
                }

                Constructor(Constructor &Ref)                //Copy Constructor
                {
                        No_1 = Ref.No_1;
                        No_2 = Ref.No_2;
                        Res = Ref.Res;

                        cout<<"\n\nInside Copy Constructor Of Our Class\n";
                }

                ~Constructor()                          //Destructor
                {
                        cout<<"\nInside Destructor Of Our Class\n"<<endl;
                }
};

//main() function Definition

int main()
{
        Constructor Obj_1(15,20);                   //Object Created Using Parameterized Constructor

        Obj_1.Add();
        cout<<"\n\nAddition of Given 2nd Object is => "<<Obj_1.Res;

        cout<<"\n\nBack To main()";
        getch();

        Constructor Obj_2(Obj_1);                   //Object Created Using Copy Constructor

        cout<<"\n\nValue Of Res For New Object is => "<<Obj_2.Res<<endl;

        getch();
        return 0;
}


