#include <iostream>
using namespace std;
class test{
public:
static int count;
test(){
    count++;
}
static int function(){
   return count;
}
};

int test::count=0;  //BY USING SCOPE RES. WE HAVE TO DECLAIR IT
int main() {
    
    test t1;
cout<<test::function();
cout<<t1.function();

    return 0;
}