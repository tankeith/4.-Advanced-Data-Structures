#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile;               // create an object of type ofstream that can be written to that isn't yet connected to any actual file
    outFile.open("outfile.txt");    // connect it to a physical file

    // return 0;
}