#include<bits/stdc++.h>

using namespace std;


int main()
{
//    vector<int>a;

//    for(int i=0;i<10;i++)
//    {
////        cout<<"Before push "<<a.size()<<"\n";
//        a.push_back(i);
////        cout<<"After push "<<a.size()<<"\n";
//    }
//
//    a.insert(a.begin() + 1 , 100);
//    for(int i=0;i<a.size();i++)
//    {
//        cout<<a[i]<<"\n";
//    }
//
////    a.erase(a.begin()+1);
//    a.pop_back();
//    cout<<"After delete\n";
//    for(int i=0;i<a.size();i++)
//    {
//        cout<<a[i]<<"\n";
//    }

    vector<int>a = {1,2,3,4,5};
    a.resize(3);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<"\n";

    return 0;
}
/*
0 100 1 2 3 ..

size = 0
[0,0,0,0,0,0,0,0,0,0]
size = 10

size = 5 a = [1,2,3,4,5]
a.resize(3)
[1,2,3]
*/
