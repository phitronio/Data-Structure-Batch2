#include <bits/stdc++.h>
using namespace std;

//Template based stack using dynamic array
template <class T>
class Stack{
public:
    T *a;
    int stack_size;
    int array_cap;

    Stack()
    {
        a = new T[1];
        array_cap = 1;
        stack_size = 0;
    }

    //Makes the array cap multiplied by 2.
    void increase_size()
    {
        T *tmp;
        tmp = new T[array_cap*2];
        for(int i=0;i<array_cap;i++)
            tmp[i] = a[i];
        swap(a,tmp);
        delete []tmp;
        array_cap = array_cap*2;
    }
    // Add an element in the stack. O(1)
    void push(T val)
    {
        if(stack_size+1 > array_cap)
        {
            increase_size();
        }
        stack_size = stack_size + 1;
        a[stack_size-1] = val;
    }

    //Delete the topmost element from the stack. O(1)
    void pop()
    {
        if(stack_size==0)
        {
            cout<<"Stack is empty!\n";
            return;
        }
        stack_size = stack_size - 1;
    }

    //Returns the top element from the stack. O(1)
    T top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            T a;
            return a;
        }
        return a[stack_size - 1];
    }
};

int main()
{
    Stack <double> st;
    st.push(3.5);
    st.push(3.6);
    st.push(7.8);
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    Stack<char> st2;
    st2.push('a');
    st2.push('g');
    st2.push('u');
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    st2.pop();
    cout<<st2.top()<<"\n";
    return 0;
}

