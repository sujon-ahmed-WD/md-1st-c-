#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int x;
    cin >>x;
    cin.ignore();
    char s[100];
    cin.getline(s,50);
    
    cout<< x <<endl ;
    cout<< s;
    return 0;
}