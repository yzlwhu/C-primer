#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    int sum = 0;
    for (int i = 1; i < argc; i++)
    {
	//string s(argv[i], sizeof(argv[i]));
	//int temp = atoi(s.c_str());
	int temp = atoi(argv[i]);
        sum += temp;
    }
    cout << sum << endl;
    return 0;
}
