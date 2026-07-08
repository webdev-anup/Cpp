#include <iostream>
using namespace std;

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int a, b;
    cout << "\n Error two numbers:";
    cin >> a >> b;

    cout << "\n Numbers Before swapping:";
    cout << "\n a = " << a;
    cout << "\n b = " << b;

    swap(&a, &b);

    cout << "\n Numbers After swapping:";
    cout << "\n a = " << a;
    cout << "\n b = " << b;

    return 0;
}
