#include <bits/stdc++.h>
using namespace std;

/*
Time complexity = O(  (n^2/2) ) = O(n^2)
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
    // i =0 --> 1 -- n-1 -> n-1
    // i =1 --> 2 -- n-1 -> n-2
    // i =2 --> 3 -- n-1 -> n-3
    // i =n-1 --> 0 -> 0
    // n * n = n^2

    //
    for(int i=0; i<n; i++)
    {
        string ans = "NO\n";
        for(int j=i+1; j<n; j++)
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

i = 0 , i=3 YES
i = 1 , NO
i = 2 , NO
i = 3 ,  NO

index = i , any index j , where j > i and a[i] == a[j]


(n-1) + (n-2) + (n-3) + .. + 2 + 1 + 0

((n-1)*n)/2
(n^2 - n)/2
(n^2/2) - (n/2)
*/
