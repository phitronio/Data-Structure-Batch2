#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;

    stack<char>st;
    for(int i=0; i<s.size(); i++)
    {
        char now = s[i];
        if(now == '(' || now=='{' || now =='[')
        {
            st.push(now);
        }
        else
        {
            if(st.empty())
            {
                cout<<"Invalid\n";
                return 0;
            }
            if(now==')' && st.top()=='(')
            {
                st.pop();
            }
            else if(now=='}' && st.top()=='{')
            {
                st.pop();
            }
            else if(now==']' && st.top()=='[')
            {
                st.pop();
            }
            else{
                cout<<"Invalid\n";
                return 0;
            }
        }
    }
    if(st.empty())
    {
        cout<<"Valid\n";
    }
    else{
        cout<<"Invalid\n";
    }
    return 0;
}

