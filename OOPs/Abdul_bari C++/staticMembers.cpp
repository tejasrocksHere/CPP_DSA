#include <iostream>
using namespace std;
class student{
public:

string name;
int rollNo;
static int totalStudent;
student(string a,int b){
totalStudent++;
name=a;
rollNo=b;
}


};
int student :: totalStudent=0; //datatype className :: nameOfStaticVarible=value

int main() {
    student s1("tejas",34);
    cout<<s1.totalStudent;

    student s2("q",54);
    cout<<s2.totalStudent;

    student s3("teeewjas",94);
    cout<<s3.totalStudent;

    student s4("tee",44);
    cout<<s4.totalStudent;
    return 0;
}