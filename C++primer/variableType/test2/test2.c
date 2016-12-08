#include <iostream>
using namespace std;

struct Person {
    int age = 2;
    int getAge(){ return age;};
};

class Cup {
    public:
    int number = 3;
    Cup(int a){ number = a; };
    int getNumber(){ return number; };
};

int main()
{
    Person p;
    cout << p.getAge() << endl;
    Cup c(1);
    cout << c.getNumber() << endl;
    Cup *c1 = new Cup(7);
    cout << c1->getNumber() << endl;
    return 0;
}
