#include <iostream>
using namespace std;
void addNum(int a, int b)
{
    cout << a + b << endl;
}
int main()
{
    int a = 10;
    int b = 30;
    cout << "Adding two numbers " << a << " and " << b << ":" << endl;
    addNum(a, b);
    return 0;
}