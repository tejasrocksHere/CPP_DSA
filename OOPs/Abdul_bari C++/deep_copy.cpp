#include <iostream>
using namespace std;
class rectangle{
    public:
    int l;
 
    int *p;
    rectangle(int l,int n){
        this->l=l;
        p=new int[n];
    }

    rectangle(rectangle& r){
        l=r.l;
        // p=r.p;  //if i do this new obejct will point to same array
p=new int[5];
    }
    
    
    
    
    };

int main() {



rectangle r1(1,5);

for(int i=0;i<5;i++){
r1.p[i]=i;

}

for(int i=0;i<5;i++){
cout<<r1.p[i]<<"  ";

}
cout<<endl;

rectangle r2(r1);


for(int i=0;i<5;i++){
r2.p[i]=2;

}
for(int i=0;i<5;i++){
cout<<r2.p[i]<<"  ";

}


    return 0;
}