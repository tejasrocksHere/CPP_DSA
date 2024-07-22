#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream infile;
    infile.open("my.txt"); 

    if(!infile.is_open()) {
        cout << "File cannot be opened" << endl;
        return 1; // Exit if file cannot be opened
    }

    string str;
    string x;
    infile >> str; // Order matters
    infile >> x;
   
    cout << str << "  " << x << endl;

    if(infile.eof()) {
        cout << "End of file reached" << endl;
    }

    infile.close();
    return 0;
}
