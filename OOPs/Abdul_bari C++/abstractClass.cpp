#include <iostream>
using namespace std;
class base{
    public:
virtual void func()=0;
void fund(){
    cout<<"Deed";
}

};

class derived:public base{
    public:

void func(){
    cout<<"derived func"<<endl;
}
};

int main() {
 base *b=new derived();
    return 0;
}