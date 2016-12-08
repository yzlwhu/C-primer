#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    vector<string> vect;
    string s;
    while (cin >> s)
    {
        vect.push_back(s);
    }
    for (vector<string>::size_type i = 0; i < vect.size(); i++)
    {
        for (string::size_type j = 0; j < vect[i].size(); j++)
        {
            if (isalpha(vect[i][j]))
            {
                vect[i][j] = toupper(vect[i][j]);
            }
        }
        cout << vect[i] << " ";
        if ((i+1) % 8 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}
