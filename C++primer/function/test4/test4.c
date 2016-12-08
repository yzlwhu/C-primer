#include <iostream>
using namespace std;

int &get(int *arr, int index)
{
    return arr[index];
}

int main()
{
    int arr[3] = {1, 2, 3};
    int a = get(arr,1);
    cout << a << endl;
    return 0;
}
