#include <iostream>
using namespace std;
class dost; //class has to name here first since c++ run code line by line and start wondering who is dost
class base{
    public:
    int a;
    protected:
    int b;
    private:
    int c;

friend dost;  //by making friend a class we can give permison to other class to access private data
};
class dost{
    public:

  void func(){
    base b1;
    b1.a=2;
    b1.b=3;
    b1.c=5;

}

};




int main() {
    // func();
    
    return 0;
}