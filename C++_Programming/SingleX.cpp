#include<iostream>
using namespace std;

class Base
{
    public :
       int i,j;

void fun()
{
    cout<<"Inside this Base fun\n";
}
};
class Derived: public Base
{
   public:
       int x;

       void gun()
       {
        cout<<"Inside Derived gun\n";
       }
};

int main()
{
    Base bobj;
    Derived dobj;


    dobj.fun();
    dobj.gub();
    
    return 0;


}
