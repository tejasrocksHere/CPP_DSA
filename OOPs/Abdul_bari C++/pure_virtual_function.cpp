#include <iostream>
using namespace std;
class car{
    public:
    virtual void start()=0;  //virtual pure fucntion ->forced runtime polymorphism
};
class innova : public car{
    public:
    void start(){cout<<"car innova"<<endl;}
};
class swift : public car{
    public:
    void start(){cout<<"car swift"<<endl;}
};
int main() {
    car *r=new innova();
    r->start();
    //one base pointers showing many forms ie polymorphism
    r=new swift();
    r->start();
    return 0;
}