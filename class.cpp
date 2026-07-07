#include <iostream>
using namespace std;
class product
{
private:
    int prodNo;
    int quentity;

public:
    float price;
    void getData(int a, int b, float c)
    {
        prodNo = a;
        quentity = b;
        price = c;
    }
    void display()
    {
        cout << "product number:" << prodNo << endl;
        cout << "Quantity:" << quentity << endl;
        cout << "price:" << price << endl;
    }
};
int main()
{
    product p;
    p.getData(5, 200, 152.44);
    p.display();
    return 0;
}
