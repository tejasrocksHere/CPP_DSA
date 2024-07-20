#include <iostream>
using namespace std;
class rectangle{
private:
int l;
int b;

public:
rectangle(){
    l=1;
    b=1;
    
}
rectangle(int len,int bre){
    l=len;
    b=bre;

}
void setL(int l){
    this->l=l;
}

void setB(int b){
    this->b=b;
}
int area(){return l*b;}

};

class cube: public rectangle{
private:
int h;
public:
cube(int h=1){
this->h=h;
}
void setHeight(int he){
h=he;
}
int volume(){return area()*h;}


};

int main() {
    cube c(2);
    c.setB(5);
    c.setL(5);

cout<<c.volume();
    return 0;
}