    #include <iostream>
    using namespace std;
    class base{
        public:

    base(){
        cout<<"constrcutor base"<<endl;
    }
     ~base(){
        cout<<"destrcutor base"<<endl;
    }
        
    }
    ;

    class derived :public base{
        public:
    derived(){
        cout<<"constructor derived"<<endl;
    }
    ~derived(){
        cout<<"destructor derived"<<endl;
    }
    };
    int main() {
    // base *d1=new derived();  //if im
    // delete d1;
derived b1;
        return 0;
    }