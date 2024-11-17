#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;

    switch (x%2)
    {
        case 0:
        cout<< "Even";

        case 1:
        cout << "Odd";
        default:
        cout<< "WOrng Case";
     
    }

    return 0;
}