#include <iostream>
using namespace std;

int main()
{
    int num, Fact = 1;
    cout << "Enter a positive number:";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        Fact *= i;
    }
    cout << "The factorial of " << num << " is " << Fact << endl;
    return 0;
}
