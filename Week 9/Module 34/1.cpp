#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> st;

    // n = number of elements currently in set
    //Insert O(log(n))
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);

    //Print O(n)
    cout<<"Printing set\n";
    for(auto i: st)
        cout<<i<<" ";
    cout<<"\n";

    //Size O(1)
    cout<<"Set Size : ";
    cout<<st.size()<<"\n";

    //Print O(n)
    cout<<"Printing set\n";
    for(auto it= st.begin(); it!= st.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";

    //Erase O(log(n))
    st.erase(5);


    cout<<"Printing set after erasing 5\n";
    for(auto i: st)
        cout<<i<<" ";
    cout<<"\n";

    st.erase(8);
    cout<<"Printing set after erasing 8\n";
    for(auto i: st)
        cout<<i<<" ";
    cout<<"\n";

    //Find O(log(n))
    if(st.find(7) != st.end())
    {
        cout<<"7 found\n";
    }
    else{
        cout<<"7 not found\n";
    }

    if(st.find(5) != st.end())
    {
        cout<<"5 found\n";
    }
    else{
        cout<<"5 not found\n";
    }

    return 0;
}

