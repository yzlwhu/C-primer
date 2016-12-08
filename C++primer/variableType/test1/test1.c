#include <iostream>
using namespace std;

extern int val1;
//extern const int val2;
extern const int val3;

//enum season {spring = "Spring", summer = "Summer", autumn = "Autumn", winter = "Winter"}; //wrong
enum season {spring = 34, summer = 23, autumn = 1, winter};


int main()
{
    int a = 34;
    const int b = a;
    cout << b << endl;
    cout << val1 << " " << val3 << endl;

    season se = spring;
    cout << se << endl;
    return 0;
}
