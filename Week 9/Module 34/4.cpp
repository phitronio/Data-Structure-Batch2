#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;
    //insert O(logn)
    mp["goru"] = 1;
    mp["chagol"] = 2;
    mp["vera"] = 3;

    //value of a key O(logn)
    cout<<"Value of a key\n";
    cout<<mp["goru"]<<"\n";

    cout<<mp["vera"]<<"\n";

    mp["cat"] = 2;
    cout<<mp["cat"]<<"\n";

    mp["cat"] = 5;
    cout<<mp["cat"]<<"\n";

    //Print the map O(n)
    for(auto it:mp)
    {
        cout<<"Key : "<<it.first <<" , Value : "<<it.second<<"\n";
    }
    //size of map O(1)
    cout<<mp.size()<<"\n";

    map<int,int>mp2;

    mp2[69] = 1;
    mp2[57] = 4;
    mp2[89] = 4;

    mp2[1000000] = 10;
    cout<<"Printing map 2\n";
    for(auto it:mp2)
    {
        cout<<"Key : "<<it.first <<" , Value : "<<it.second<<"\n";
    }



    return 0;
}

