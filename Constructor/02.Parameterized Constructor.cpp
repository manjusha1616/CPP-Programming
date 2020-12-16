//Parameterized Constructor

using namespace std;
#include<iostream>
#include<conio.h>

class Constructor
{
        public:
                int i,j,k;                                          //Public Data Members Or Characteristics Declaration

                void Fun()
                {
                    cout<<"\n\nInside Public Fun() Function Of Our Class...";
                    i = k = 500;
                    j = i*5;
                }

                Constructor()                             //Default Constructor
                {
                        i = 0;
                        j = 1;
                        k = 1000;

                        cout<<"\nInside Default Constructor Of Our Class";
                        cout<<"\n\n Values Of Characteristics => \n I ="<<i<<" J="<<j<<" K ="<<k;
                }

                Constructor(int N1, int N2)                //Parameterized Constructor
                {
                        i = N1;
                        j = N2;
                        k = 1000;

                        cout<<"\nInside Parameterized Constructor Of Our Class";
                        cout<<"\n\n Values Of Characteristics => \n I ="<<i<<" J="<<j<<" K ="<<k;
                }

                ~Constructor()                          //Destructor
                {
                        cout<<"\n\nInside Destructor Of Our Class"<<endl;
                        cout<<"\n Values Inside Destructor Of Current Object => \n I ="<<i<<" J="<<j<<" K ="<<k<<endl;
                }
};

//main() function Definition


int main()
{
        Constructor Obj_1;                            //Object Created Using deafault Constructor

        getch();

        Obj_1.Fun();

        cout<<"\n\nBack To main()";
        getch();

        Constructor Obj_2(15,20);                   //Object Created Using Parameterized Constructor

        getch();
        return 0;
}


