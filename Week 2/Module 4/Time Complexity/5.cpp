#include <bits/stdc++.h>
using namespace std;

/*
Time complexity = O(2^n)
Memory complexity = O(n)
*/
/*
If ans saved
Time complexity = O(n)
Memory complexity = O(n)
*/
int called = 0;
int save[100];

int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    if(save[n]!=0)
        return save[n];
    //fib(n-1) + fib(n-2)
    int x = fib(n-1);
    called++;
    int y = fib(n-2);
    called++;
    save[n] = x+y;
    return x+y;
}

int main()
{
    int n;
    cin>>n;
    cout<<"Fib = "<<fib(n)<<"\n";
    cout<<"Called = "<<called<<"\n";

    return 0;
}
/*
n

n-th fibonacci

F[0] = 0
F[1] = 1
F[2] = F[1] + F[0] = 1+0 = 1
F[3] = F[2] + F[1] = 1+1 = 2
F[4] = 2+1 = 3
F[5] = 3+2 = 5

F[i] = F[i-1] + F[i-2]



*/
