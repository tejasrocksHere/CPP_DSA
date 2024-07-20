#include <iostream>
using namespace std;
class Rectangle{private:int length;
int breadth;
public:    Rectangle(); 
   Rectangle(int l,int b);    
   Rectangle(Rectangle &r);
   int getLength(){return length;
   }
   int getBreadth(){return breadth;}
   void setLength(int l);
   void setBreadth(int b);
   int area();
   int perimeter();
   bool isSquare(); 
      ~Rectangle();
      
      };

      Rectangle ::Rectangle(l1,b1){
        l=l1;
        b=b1;
      }
int ::Rectangle setBreadth(x){
    b=x;
}
int main() {
    
    return 0;
} 