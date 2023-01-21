#include <bits/stdc++.h>
using namespace std;


int main()
{
    // O(n*log(n))
    for(int i=1;i<=n;i++)
    {
        if(__builtin_popcount(i)==1)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<i<<" "<<j<<"\n";
            }
        }
    }

    // O(n(logn)^2)
    for(int i=1;i<=n;i++)
    {
        if(__builtin_popcount(i)==2)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<i<<" "<<j<<"\n";
            }
        }
    }
    return 0;
}

