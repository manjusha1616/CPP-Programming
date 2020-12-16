//Default Constructor

using namespace std;
#include<iostream>
#include<conio.h>

class Default_Constructor
{
        private:
                int x,y;                                          //Private Data Members Or Characteristics Declaration

                void Sun();                                       //Private Member Function Or Behaviour Declaration

        protected:
                int a,b;                                          //Protected Data Members Or Characteristics Declaration

                void Gun();                                       //Protected Member Function Or Behaviour Declaration

        public:
                int i,j;                                          //Public Data Members Or Characteristics Declaration

                void Fun();                                       //Public Member Function Or Behaviour Declaration

                Default_Constructor()                             //Default Constructor
                {
                        i = j = x = y = 1500;
                        a = b = 2020;

                        cout<<"\nInside Default Constructor Of Our Class";

                        //Inside Constructor We Can Call Any Member Function Without Access Specifier Limitations Bcoz Constructor Is Insider Of Class & Insider Of Class Can Access Any Characteristics Or Behaviour Of Class

                        Fun();
                        Sun();
                        Gun();

                        cout<<"\n\nValues Of Characteristics Inside Constructor =>\n i = "<<i<<"\tj = "<<j<<"\n x ="<<x<<"\ty ="<<y<<"\n a ="<<a<<"\tb= "<<b;
                        getch();
                }
                ~Default_Constructor()                          //Destructor
                {
                        cout<<"\n\nInside Destructor Of Our Class"<<endl;
                }
};

//main() function Definition

int main()
{
        Default_Constructor Obj;                            //Object Created Using deafault Constructor

        cout<<"\nInside main() Function...!!!";

        Obj.Fun();                                          //Public Member Function Is Accessible Outside The Class

        //Obj.Gun();                                        //Private Member Function Cant Accessible Outside The Class

        //Obj.Sun();                                        //Protected Member Function Cant Accessible Outside The Class

        cout<<"\n\nValues Of Public Characteristics of Obj => \n i = "<<Obj.i<<" j = "<<Obj.j;

        //cout<<"\n\nValues Of Private Characteristics of Obj => \n x = "<<Obj.x<<" y = "<<Obj.y;

        //cout<<"\n\nValues Of Protected Characteristics of Obj => \n a = "<<Obj.a<<" b = "<<Obj.b;

        getch();
        return 0;
}

//Member Function Definitions Outside The class

void Default_Constructor :: Sun()
{
        cout<<"\n\nInside Private Sun() Function Of Our Class...";
}

void Default_Constructor :: Gun()
{
        cout<<"\n\nInside Protected Gun() Function Of Our Class...";
}
void Default_Constructor :: Fun()
{
        cout<<"\n\nInside Public Fun() Function Of Our Class...";
}
