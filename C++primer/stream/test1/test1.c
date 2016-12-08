#include <iostream>
#include <fstream>
using namespace std;

istream & fun(istream & in1)
{
    string str;
    while(in1 >> str, !in1.eof())
    {
	cout << str;
    }
    in1.clear();
    return in1;
}

int main()
{
    ifstream f1("hello.txt");
    fun(f1);
    return 0;
}
