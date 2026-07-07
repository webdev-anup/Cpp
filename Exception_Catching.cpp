#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age:";
    cin >> age;

    try
    {
        if (age < 0 || age > 100)
        {
            throw(age);
        }
        else
        {
            cout << "Your age is:" << age << endl;
        }
    }
    catch (int a)
    {
        cout << "Invalid age:" << a << endl;
    }
    return 0;
}