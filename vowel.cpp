#include<iostream>
using namespace std;
int main()
{
    char x;
    cin>> x;

    switch(x=='a'|| x=='e'|| x=='i' || x=='o' ||x=='u' )
    {
        case true:
        cout<<"vowel";
        break;
        case false:
        cout << "Conosonent";
        break;
    }
    return 0;
}