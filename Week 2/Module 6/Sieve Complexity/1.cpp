#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>primes;
    vector<bool>visited(n+1);
    // O(n * n/2) O(n^2)
    // i = 2 , n/2
    // i = 3 , n/3
    // i = 4 , 0
    // i = 5 , n/5
    // i = 6 , 0
    // ....
    // n/2 + n/3 + n/4 + n/5 + n/6 + ...
    // O(nlogn)
    for(int i=2;i<=n;i++)
    {
        if(visited[i]==false)
        {
            primes.push_back(i);
            for(int x=2;i*x<=n;x++)
            {
                visited[i*x] = true;
            }
        }
    }
    cout<<primes.size()<<"\n";
    for(int i=0;i<primes.size();i++)
        cout<<primes[i]<<" ";
    cout<<"\n";
    return 0;
}
