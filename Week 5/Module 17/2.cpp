#include <bits/stdc++.h>
using namespace std;

vector<int>coins = {1,3,4};

int coin_change(int n)
{
    if(n==0)
        return 0;

    int ans = 100000000;
    for(int i=0; i<coins.size(); i++)
    {
        if(n>=coins[i])
        {
            ans = min(ans, 1+coin_change(n-coins[i]) );
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<coin_change(n)<<"\n";

    return 0;
}

