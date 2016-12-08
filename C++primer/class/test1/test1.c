#include "Person.h"

int main()
{
    Person p("qian", "wuhan"), p1;
    cout << p.getName() << " " << p.getAddress() << endl;
    cout << p1.getName() << " " << p1.getAddress() << endl;
    return 0;
}
