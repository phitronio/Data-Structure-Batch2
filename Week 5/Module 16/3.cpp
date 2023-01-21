#include <bits/stdc++.h>
using namespace std;


int main()
{
    //Time O(sqrt(n))
    //Space O(1)
    int n;
    cin>>n;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<"\n";
            cout<<(n/i)<<"\n";
        }
    }

    return 0;
}

