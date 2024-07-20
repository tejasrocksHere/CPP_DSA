#include <iostream>
using namespace std;
class animal{
    public:
    void attack(){
        cout<<"attack by parent"<<endl;
    }
};
class cat : public animal{
       public:
       
    void attack(){
        cout<<"attack by cat "<< endl;
    
    // return 0;
    }
}
;
int main() {
    cat c;
    c.attack();
    
    return 0;
}