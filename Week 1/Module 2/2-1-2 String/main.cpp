#include<bits/stdc++.h>

using namespace std;

int main()
{
//    string s = "I am eating rice.";
//    string s2 = "I am also eating dal.";

//    cout<<s.size()<<"\n";
//    string s3 = "I am eating rice.I am also eating dal.";

//    cout<<s[0]<<"\n";
//    cout<<s[1]<<s[2]<<"\n";
//    string s3 = s + s2;
//    cout<<s3<<"\n";

//    for(int i=0;i<s.size();i++)
//    {
//        s[i] = s[i] + 1; /* 'a' + 1 = 'b'*/
//    }
//    cout<<s<<"\n";

//    s.pop_back();
//    string s= "abcdefg";
//    s.erase(s.begin()+100);
//    cout<<s<<"\n";

    string s;
    cin>>s;

    s.erase(s.begin());
    s.erase(s.begin() + s.size()-1);
//    s.pop_back();
    cout<<s<<"\n";
    return 0;
}
/*
A --> B
B --> C

abcd xyz
*/
