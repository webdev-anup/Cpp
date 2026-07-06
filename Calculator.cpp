#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char op;

    cout << "Simple calculator" << endl;
    cout << "Enter two number:";
    cin >> num1 >> num2;

    cout << "Enter an op(+, -, *, /):";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "Result:" << num1 + num2;
        break;

    case '-':
        cout << "Result:" << num1 - num2;
        break;

    case '*':
        cout << "Result:" << num1 * num2;
        break;

    case '/':
        if (num2 != 0)
            cout << "Result:" << num1 / num2;
        else
            cout << "Error: Division by zero!";
        break;
    }
    return 0;
}
