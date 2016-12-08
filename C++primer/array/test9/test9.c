#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <cstring>
using namespace std;

void copyVectorToArray(string str, char *&arr)
{
   for (string::size_type i = str[0]; i < str.size(); i++)
   {
	*arr = str[i];
	arr++;
   }
}

int main()
{
    string s;
    vector<string> vect;
    while (cin >> s)
    {
	vect.push_back(s);
    }
    char *p[vect.size()];
    int i = 0;
    for (vector<string>::iterator it = vect.begin(); it != vect.end(); it++)
    {
        p[i] = new char[(*it).size()];
	copyVectorToArray(*it, p[i]);
	i++;
    }
    for (int i = 0; i < vect.size(); i++)
    {
	cout << *(p[i]) << endl;
    }
    return 0;
}
