#include <bits/stdc++.h>
using namespace std;


int main()
{
    queue<int> q;
    //enqueue O(1)
    q.push(5);
    q.push(10);
    q.push(15);

    //size O(1)
    cout<<"Queue size : "<<q.size()<<"\n";
    //empty O(1)
    cout<<q.empty()<<"\n";

    //front O(1)
    cout<<q.front()<<"\n";

    //dequeue O(1)
    q.pop();

    cout<<q.front()<<"\n";
    q.pop();

    cout<<q.front()<<"\n";
    q.pop();

    cout<<q.empty()<<"\n";

    queue<char>q2;
    q2.push('a');
    q2.push('b');
    q2.push('c');

    cout<<q2.front()<<"\n";

    q2.pop();

    cout<<q2.front()<<"\n";
    q2.pop();

    cout<<q2.front()<<"\n";
    q2.pop();
    return 0;
}

