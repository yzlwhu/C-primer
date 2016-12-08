#include <iostream>
using namespace std;
//exercise if judgement

int main()
{
// sum of all numbers between two input nubmbers
/*
    int a, b;
    cin >> a >> b;
    int low, high;
    if (a <= b)
    {
         low  = a;
         high = b;
    } else {
         low = b;
         high = a;
    }
    int sum = 0;
    for(int i = low; i <= high; i++)
    {
         sum += i;
    }
    cout << sum << endl;
*/

//the smaller number of two input numbers
/*
    int a, b, min = 0;
    cin >> a >> b;
    if (a <= b)
    {
        min = a;
    } else {
        min = b;
    }
    cout << min << endl;
*/

//count negative numbers of all input numbers
/*
    int a[5];
    int neg = 0;
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            neg++;
        }
    }
    cout << neg << endl;
*/

//uncertain count of input numbers
/*
    int sum = 0, value;
    while (cin >> value)
    {
        sum += value;
    }
    cout << sum << endl;
*/

//print all numbers betwen two input numbers
    int a, b;
    int low, up;
    cin >> a >> b;
    if (a <= b)
    {
        low = a;
        up = b;
    } else {
        low = b;
        up = a;
    }
    for (int i = low; i <= up; i++)
    {
        cout << i;
        if ( (i - low + 1) % 10 != 0)
            cout << " ";
        else
            cout << endl;
    }
    cout << endl;
    return 0;
}
