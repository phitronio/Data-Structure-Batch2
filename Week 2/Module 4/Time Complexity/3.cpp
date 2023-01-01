#include <bits/stdc++.h>
using namespace std;

// 1000 O(1000 + 1000000)
/*
Time complexity = O( n + n^2 ) = O(n^2)
Memory complexity = O(n)
*/
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    // i =0 --> n
    // i =1 --> n
    // i =2 --> n
    // i =n-1 --> n
    // n * n = n^2

    //
    for(int i=0; i<n; i++)
    {
        string ans = "NO\n";
        for(int j=0; j<n; j++)
        {
            if(i==j)
                continue;
            if(a[i]==a[j])
            {
                ans = "YES\n";
            }
        }
        cout<<"i = "<<i<<" "<<ans;
    }

    return 0;
}
/*
n
4
2 4 6 2

i = 0 , YES
i = 1 , NO
i = 2 , NO
i = 3 , YES



*/
