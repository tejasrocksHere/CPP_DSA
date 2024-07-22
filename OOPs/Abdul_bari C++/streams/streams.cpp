#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile("my.txt", ios::app);
    outfile << "hello" << endl;
    outfile.close();
    return 0;
}
