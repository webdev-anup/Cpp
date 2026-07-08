#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int length;

public:
    Rectangle()
    {
        width = 5;
        length = 10;
    }
    void area()
    {
        cout << "The area = " << width * length << endl;
    }
    void operator++()
    { // prefix
        width++;
        length++;
    }
};

int main()
{
    Rectangle obj1;
    obj1.area();

    ++obj1; // ✅ prefix operator
    obj1.area();

    return 0;
}
