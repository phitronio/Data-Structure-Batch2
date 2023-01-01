#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    int sum = 0;
    for(int i=0;i<n;i++)
        sum = sum + a[i];

    cout<<sum<<"\n";

    int x = 1;
    for(int i=0;i<n;i++)
        x = x*a[i];

    cout<<x<<"\n";
    return 0;
}
/*
10


sum


3
5 6 7

sum = 0
sum = 0 + 5 = 5
sum = 5 + 6 = 11
sum = 11 + 7 = 18

0 + 5 + 6 + 7 = 18


3
5 6 7

1 * 5 * 6 * 7 = 210

x = 1
x = x * 5 = 1 * 5 = 5
x = x * 6 = 5 * 6 = 30
x = x * 7 = 30 * 7 = 210 = 1 * 5* 6* 7 = 210
*/
