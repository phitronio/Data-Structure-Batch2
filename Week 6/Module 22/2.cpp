#include <bits/stdc++.h>
using namespace std;


int main()
{
    //Stack
    stack<int> st;

    //push O(1)
    st.push(10);
    st.push(20);
    st.push(30);

    //size O(1)
    cout<<"Stack size : "<<st.size()<<"\n";

    //top O(1)
    cout<<st.top()<<"\n";

    //pop O(1)
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();

    cout<<"Stack size : "<<st.size()<<"\n";
    return 0;
}

