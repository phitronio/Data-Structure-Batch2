#include <bits/stdc++.h>
using namespace std;


int main()
{
    //O(n*log(n))
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j=j+i)
        {
            cout<<i<<" "<<j<<"\n";
        }
    }

    return 0;
}

