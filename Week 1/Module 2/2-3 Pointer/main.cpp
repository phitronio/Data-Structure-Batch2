#include<bits/stdc++.h>

using namespace std;


int main()
{
    int x = 10;
    int *y = &x;

    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<*y<<"\n";

    x = 100;

    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<*y<<"\n";
    return 0;
}
