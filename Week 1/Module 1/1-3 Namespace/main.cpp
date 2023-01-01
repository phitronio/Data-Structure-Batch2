#include<bits/stdc++.h>

using namespace std;

int x=5,y,z;

int func(int a, int b)
{
    return a+b;
}

//namespace std{
//    //decleare cout
//    cout
//
//}

namespace Info{
    int x=10;
    int y = 5;

    int func(int a, int b)
    {
        return a*b;
    }
}

//using namespace Info;

int main()
{
    int a = 4;
    int b = 5;

    int x = func(a,b);
    cout<<x<<"\n";
    return 0;
}
