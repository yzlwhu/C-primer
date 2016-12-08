#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> vec(3);
    vec[0] = "hello";
    vec[1] = "world";
    cout << vec.size() << endl;
    vec[0] = "lee";
    cout << vec.size() << endl;
    for(vector<string>::size_type i = 0; i != vec.size(); i++)
        cout << vec[i] << endl;
    return 0;
}
