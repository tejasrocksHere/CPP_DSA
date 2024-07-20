    #include <iostream>
    using namespace std;
    class oldCar{
        public:
        void wind(){
            cout<<"window "<<endl;
        }
        void driver(){
            cout<<"driver"<<endl;
        }
        void light(){
            cout<<"light"<<endl;
        }
    };
    class newCar :public oldCar{
        public:
        void ac(){
            cout<<"ac"<<endl;
        }
        void gps(){
            cout<<"gps"<<endl;
        }
        void digital(){
            cout<<"digital"<<endl;
        }
    };
    int main() {
        oldCar * car= new newCar();
        car->wind();
        car->driver();
        car->light();
        // car->digital();  //not possible(only parent fundtions accesble)
        newCar car1= new oldCar();  //not possible (only childs objects possible)
        return 0;
    }