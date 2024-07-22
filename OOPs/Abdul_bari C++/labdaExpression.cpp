#include <iostream>
using namespace std;
class test{
    public:
int a,b;

test(int a=1,int b=2){
    this->a=a;
    this->b=b;
}

    int add(){
        return a+b;

    }
    int add()
{    return a+b+2;   
}



};
int main() {
    test t1(2);
    cout<< t1.add();

    return 0;
}