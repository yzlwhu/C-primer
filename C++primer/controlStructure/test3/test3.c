#include <iostream>
using namespace std;

int main()
{
//    int sum = 0;
//output sum from 50 to 100 by using for loop
/*
    for(int i = 50; i <= 100; i++)
    {
        sum += i;
    }
*/

//output sum from 50 to 100 by using while loop
/*
    int i = 50;
    while(i <= 100)
    {
        sum += i;
        i++;
    }
*/
//    cout << sum << endl;

//output all numbers from 10 to 0 in decreasing order by while loop
/* 
    int i = 10;
    while(i >= 0)
    {
        cout << i << " ";
        i--;
    }   
    cout << endl;
*/

//output all numbers from 10 to 0 in decreasing order by using for loop
    for(int i = 10; i >= 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
