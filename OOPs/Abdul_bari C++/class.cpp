#include <iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;
    int area(){
        return l*b;
    }
    int perimeter(){
        return l+b;
    }
    
    
    
    };

int main() {
    rectangle r1,r2;
//memory will consume only data members 
//no functions will take space in m/w
r1.l=10;
r1.b=10;

// cout<< r1.area();

rectangle *r3= new rectangle();
rectangle r4;

r3->l=5;
r3->b=5;
cout<<r3->area();



    return 0;
}