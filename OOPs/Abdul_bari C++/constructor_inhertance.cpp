#include <iostream>

using namespace std;
class base {
  public: base() {
    cout << "Non parametric call to base" << endl;
  }
  base(int x) {
    cout << " parametric call to base " << x << endl;
  }
};
class derived: public base {
  public: derived() {
    cout << "Non parametric call to derived" << endl;
  }
  derived(int y) {
    cout << " parametric call to derived " << y << endl;
  }
  derived(int x, int y): base(y) {
    cout << " parametric call to derived " << y << endl;
  }
};
int main() {
  derived d; //first parent defualt constructor then child defaukt
  cout << endl;
  derived d1(5); //default contructor parent class->parametric contstrutor of  child class 
  cout << endl;
  derived d2(5, 10); //i want to call parametric costructor of parent class

  return 0;
}