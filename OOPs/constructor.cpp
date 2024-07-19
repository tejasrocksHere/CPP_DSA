#include <iostream>
using namespace std;
class hero{
    // int name;

    public:
    int age;
    int health;
    string name;
    hero(int age,int health,string name){
        this->age=age;
        this->health=health;
        this->name=name;
    }
     hero(int age,string name){
        this->age=age;
        // this->health=health;
        this->name=name;
    }
void print(){
    cout<<age<<" "<<health<<" "<<name<<endl;
}
};
int main() {

    // dyamic
  hero *h1=new hero(1,"tejas");



(*h1).print();

 
}