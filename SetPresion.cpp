#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 13.258;

    cout << fixed << setprecision(1) << x;
    return 0;
}