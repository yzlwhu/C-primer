#include <iostream>
#include <fstream>
using namespace std;

void open_file (ifstream &in, const string & file)
{
    in.close();
    in.clear();
    in.open(file);
}

int main()
{
    string file = "test3.txt";
    ifstream input1;
    open_file(input1, file);
    string s;
    input1 >> s;
    cout << s << endl; 
    return 0;
}
