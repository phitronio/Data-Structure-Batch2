#include <bits/stdc++.h>
using namespace std;

int main()
{
//    double x = 3.446444;
//    printf("%.2f",x);
//    cout<<setprecision(2)<<fixed<<x;
    ofstream of;
    of.open("1.txt");

    ofstream of2;
    of2.open("2.txt");

    ifstream ifs;

    ifs.open("0.txt");
    int x;
    double y,z;
    ifs >> x >> y >> z;

    cout<<x<<" "<<y<<" "<<z<<"\n";

    of<<"hello world\n";

    of2<<"Hello OF2\n";
    ifs.close();
    of.close();
    of2.close();
    return 0;
}
/*
10 11

10 11
*/
