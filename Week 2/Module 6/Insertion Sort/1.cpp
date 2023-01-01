#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    //Memory complexity O(n)
    //Time complexity O(n^2)
    for(int i=1; i<n; i++)
    {
        int idx = i;
        while(idx >= 1)
        {
            if(a[idx-1] > a[idx])
            {
                swap(a[idx-1], a[idx]);
                idx--;
            }
            else{
                break;
            }
        }
        cout<<"Considering "<<i<<": ";
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    cout<<"After Sorting: ";
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<"\n";

    return 0;
}
/*
0+1+2+..+n-1

O(n^2)
*/
