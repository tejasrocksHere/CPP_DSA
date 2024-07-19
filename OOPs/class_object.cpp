#include <iostream>
using namespace std;
class hero{
    // int name;
    public:
    string name;
    private:
    int age;
public: 
    void print(){
        cout<<age<<" "<<name<<endl;
    }
    void setHealth(int h){
        age=h;

    }
    int getHealth(){
        return age;
    }

};
int main() {

    // dyamic
  hero *h1=new hero;

  h1->setHealth(21);
  h1->name="tejas";
  cout<<h1->name<<" "<<h1->getHealth();
}