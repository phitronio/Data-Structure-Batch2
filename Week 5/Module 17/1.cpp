#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;

    return factorial(n-1)*n;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<"\n";

    return 0;
}

