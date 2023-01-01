#include<bits/stdc++.h>

using namespace std;

/*
b = 3
a = b   a=3
b = 5

a = 3
b = 5
*/
string erase_first_last(string s)
{
    s.erase(s.begin());
    s.pop_back();

    return s;
}

void erase_first_last2(string &s)
{
    s.erase(s.begin());
    s.pop_back();
    cout<<"In function s="<<s<<"\n";
}

void Swap(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
    /*
    x = 4, y = 5

    z = x , z = 4
    x = y x = 5
    y = z y = 4
    */

}
int main()
{
//    string s;
//    cin>>s;
////    string ans = erase_first_last(s);
////
////    cout<<s<<"\n";
////    cout<<ans<<"\n";
//
//    erase_first_last2(s);
//    cout<<s<<"\n";

    int a,b;
    cin>>a>>b;
    Swap(a,b);
    cout<<a<<" "<<b<<"\n";
    return 0;
}
/*
a , b
3 , 5

a = b
b = a
a = 5
b = 3
*/
