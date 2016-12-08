#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
	string name;
	string address;
    public:
	Person(): name("lee"), address("wuhan"){};
	Person(string, string);
	string getName() const;
	string getAddress() const;
};
