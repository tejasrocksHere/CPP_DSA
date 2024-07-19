#include <iostream>
using namespace std;
class rectangle{
    private:
    int l;
    int b;
    public:
    // default constructor (give me simple pizza im hugry give me whaterver is ready)
 
    // parameters (give me pizza with cheese topings add tomator add xyz)
rectangle(int la=0,int ba=0){

this->l=la;
this->b=ba;
}

// copy constructor (whatever that guy is eating i want the same one)

rectangle(rectangle & r){
this->l=r.l;
this->b=r.b;

}

// public:


    int area(){
        return l*b;
    }
    int perimeter(){
        return l+b;
    }
    
    
    
    };

int main() {
    //default contructor
rectangle r1;
cout<<r1.area();

//paramt
rectangle r2(10,10);

cout<<r2.area()<<endl;

//copy contructors 
rectangle r3(10,120);
rectangle r4(r3);
cout<<r4.area();


    return 0;
}