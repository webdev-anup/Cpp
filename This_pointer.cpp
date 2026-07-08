#include <iostream>
using namespace std;
class person
{
private:
    int age;

public:
    void display();
};
void person ::display()
{
    age = 26;
    cout << "The age of the person is = " << age << endl;
}
int main()
{
    person p;
    p.display();
    return 0;
}
