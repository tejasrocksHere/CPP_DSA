#include <iostream>
using namespace std;
class basicCar{
public:
 virtual void run(){
        cout<<"running like a old car"<<endl;
    }
};
class newCar: public basicCar{
public:
 void run(){
        cout<<"running like a new car"<<endl;
    }
};
class autoRickshaw: public basicCar{
public:
 void run() {
        cout<<"running like a new autoRickshaw"<<endl;
    }
};

int main() {
   basicCar * b= new autoRickshaw();
   b->run();
}