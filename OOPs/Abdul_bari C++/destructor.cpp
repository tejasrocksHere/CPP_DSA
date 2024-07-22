#include <iostream>
using namespace std;
class test{
public:
int *p;
test(){
    p= new int[5];
    cout<<"constructor called"<<endl;
}
~test(){
    delete []p;  //heap memeory data members must deleted in distrurctor using delete
    cout<<"destructor called"<<endl;
}


};
void fun(){

    test *t1=new test(); //only contrctor will call if u create object dynamically
delete t1;  //if u write delete pointer then only distructor will call 
//heap memeory directly deletec
}

int main() {
    fun();
    return 0;
}