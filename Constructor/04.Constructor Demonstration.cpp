//Constructor Demonstration

using namespace std;
#include<iostream>
#include<conio.h>

class Constructor
{
        public:
                int No_1,No_2,Res;                                          //Public Data Members Or Characteristics Declaration

                int Add()
                {
                    cout<<"\nInside Public Add() Function Of Our Class...";

                    Res = No_1 + No_2;
                    return Res;
                }

                Constructor()                             //Default Constructor
                {
                        No_1 = 0;
                        No_2 = 0;
                        Res = 0;

                        cout<<"\nInside Default Constructor Of Our Class";
                }

                Constructor(int N1, int N2)                //Parameterized Constructor
                {
                        No_1 = N1;
                        No_2 = N2;
                        Res = 0;

                        cout<<"\nInside Parameterized Constructor Of Our Class";
                }

                Constructor(Constructor &Ref)                //Copy Constructor
                {
                        No_1 = Ref.No_1;
                        No_2 = Ref.No_2;
                        Res = Ref.Res;

                        cout<<"\nInside Copy Constructor Of Our Class";
                }

                ~Constructor()                          //Destructor
                {
                        cout<<"\n\nInside Destructor Of Our Class"<<endl;
                }
};

//main() function Definition


int main()
{
        Constructor Obj_1;                          //Object Created Using deafault Constructor

        cout<<"\n\n Enter 2 Numbers For Addition => ";
        cin>>Obj_1.No_1>>Obj_1.No_2;

        getch();

        Obj_1.Add();
        cout<<"\n\nAddition of Given Object is => "<<Obj_1.Res;

        cout<<"\n\nBack To main()";
        getch();

        Constructor Obj_2(15,20);                   //Object Created Using Parameterized Constructor

        Obj_2.Add();
        cout<<"\n\nAddition of Given 2nd Object is => "<<Obj_2.Res;

        cout<<"\n\nBack To main()";
        getch();

        Constructor Obj_3(Obj_2);                   //Object Created Using Copy Constructor

        cout<<"\n\nValue Of Res For New Object is => "<<Obj_3.Res;

        getch();
        return 0;
}


