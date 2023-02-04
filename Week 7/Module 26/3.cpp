#include <bits/stdc++.h>
using namespace std;


int main()
{
    deque<int>dq;
    dq.push_back(5);
    dq.push_back(10);
    dq.push_front(20);
    dq.pop_back();
    dq.pop_front();

    cout<<dq.size()<<"\n";

    cout<<dq.front()<<"\n";

    cout<<dq.back()<<"\n";



    return 0;
}

