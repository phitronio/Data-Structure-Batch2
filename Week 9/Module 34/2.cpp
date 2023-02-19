#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> a;

    //Insert O(logn)
    a.insert(5);
    a.insert(7);
    a.insert(4);
    a.insert(3);
    a.insert(4);
    a.insert(7);

    //Print O(n)
    cout<<"Printing the multiset\n";
    for(auto it:a)
        cout<<it<<" ";

    cout<<"\n";

    //Size O(1)
    cout<<"Size of multiset : "<<a.size()<<"\n";


    //erase O(logn)
    //erase all occurrence
    a.erase(4);
    cout<<"Printing the multiset after erasing 4\n";
    for(auto it:a)
        cout<<it<<" ";

    cout<<"\n";

    //erase a single occurrence
    a.erase(a.find(7));
    cout<<"Printing the multiset after erasing 7\n";
    for(auto it:a)
        cout<<it<<" ";

    cout<<"\n";

    //find O(logn)
    if(a.find(5) != a.end())
    {
        cout<<"5 Exists\n";
    }
    else{
        cout<<"5 doesn't exist\n";
    }

    if(a.find(4) != a.end())
    {
        cout<<"4 Exists\n";
    }
    else{
        cout<<"4 doesn't exist\n";
    }

    return 0;
}

