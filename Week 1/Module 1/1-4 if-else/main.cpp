#include<bits/stdc++.h>

using namespace std;

int main()
{
//    bool x= true;
//    bool y = false;
//
//    int z = 5;
//    if ( z < 10)
//    {
//        //code
//        cout<<"True\n";
//        if(x)
//        {
//            cout<<"I am nested if\n";
//        }
//        else{
//            cout<<"I am nested else\n";
//        }
//    }
//    else{
//        //code
//        cout<<"False\n";
//    }

    int day = 4;
    if(day <= 2)
    {
        cout<<"I am if\n";
    }
    else if(day <= 5)
    {
        cout<<"I am else if\n";
    }
    else{
        cout<<"I am else\n";
    }

    int day;
    cin>>day;

    switch(day) //expression
    {
    case 1:
        cout<<"Saturday\n";
        break;
    case 2:
        cout<<"Subday\n";
        break;
    case 3:
        cout<<"Monday\n";
        break;
    default:
        cout<<"Invalid day\n";
        break;
    }
    return 0;
}
