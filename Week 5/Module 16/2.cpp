#include <bits/stdc++.h>
using namespace std;


int main()
{
    //Time O(n^2)
    //Space O(n^2)
    int n;
    cin>>n;

    vector<int>a(n*n);
    for(int i=0;i<n*n;i++)
    {
        cin>>a[i];
    }

    int sum = 0;
    for(int i=0;i<n*n;i++)
        sum = sum + a[i];

    cout<<sum<<"\n";

    return 0;
}

