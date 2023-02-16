#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    //push O(logn)
    pq.push(10);
    pq.push(5);
    pq.push(3);
    pq.push(8);
    pq.push(9);

    while(pq.size() != 0)
    {
        //top O(1)
        cout<<pq.top()<<"\n";

        //pop O(logn)
        pq.pop();
    }

    return 0;
}

