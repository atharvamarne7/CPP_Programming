#include<iostream>
using namespace std;

class Base
{
  public:
     int i,j;

     void fun()
     {
        cout<<"Inside base fun\n";
     }
     void gun()
     {
      cout<<"Inside base gun\n";
     }
     void sun()
     {
      cout<<"Inside base sun\n";
     }
     void bun()
     {
      cout<<"Inside base bun\n";
     }
};

class Derived:public Base
{
  public:
     int x;
     void gun()
     {
      cout<<"Inside Derived gun\n";
     }
     void sun()
     {
      cout<<"Inside Derived sun\n";
     }
     void run()
     {
      cout<<"Inside Derived run\n";
     }
     void mun()
     {
      cout<<"Inside Derived mun\n";
     }
};

int main()
{
    Base *bp=new Derived();      //Upcasting

    bp->fun();
    bp->gun();
    bp->sun();
   // bp->run();     //ERROR
   // bp->mun();     //ERROR
    bp->bun();


    return 0;
}