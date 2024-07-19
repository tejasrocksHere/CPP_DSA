#include <iostream>
using namespace std;
class hero{
    public:
    int age;
    int level;
    string name;
    public:
    void setAge(int age){
        this->age=age;
    }



};

class krish:public hero{
    public:
    int color;


};
int main() {
    krish k1;
    k1.color=1;
    k1.name="tejas";

    return 0;
}