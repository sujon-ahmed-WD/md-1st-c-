#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    // if (a < b)
    // {
    //     cout << a;
    // }
    // else
    // {
    //     cout<< b;
    // }
    swap(a,b);

     cout<<max({1,2,3,50})<<endl;
    // cout<<max(a,b)<<endl;
    cout<<a <<" "<<b;
    return 0;
}