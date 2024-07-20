#include <iostream>
using namespace std;
class parent{
public:
void sayHello(){
    cout<<"Hello  "<<endl;
}


};
class base1: virtual public parent{
    public:
    void sayBye(){
    cout<<"Bye  "<<endl;
}
};
class base2: virtual public parent{
    public:
    void sayGood(){
    cout<<"Good "<<endl;
}
};
class child: public base1,public base2{
   public:
   int a;

};

int main() {
    child c;
    
    c.sayHello(); // Accessing member function from parent class
    c.sayBye();   // Accessing member function from base1 class
    c.sayGood();  // Accessing member function from base2 class
    
    return 0;
}
