#include<bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student()
    {

    }
    Student(string name, int id, int age, string f_name, string m_name)
    {
        this->name = name;
        std_id = id;
        this->age = age;
        fathers_name = f_name;
        mothers_name = m_name;
    }

    Student(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
    }

    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }

    bool operator < (Student s)
    {
        return std_id < s.std_id;
    }
};

//bool comp(Student a , Student b)
//{
//    // when a is less than b
//    if(a.std_id == b.std_id)
//        return a.age < b.age;
//    return a.std_id < b.std_id;
//}

int main()
{
    vector<Student>a;
    for(int i=0;i<10;i++)
    {
        a.push_back(Student("A" , 20-i , 20));
    }

    for(int i=0;i<10;i++)
    {
        a[i].print_information();
    }

    cout<<"After sorting\n";
    sort(a.begin(),a.end());
    for(int i=0;i<10;i++)
    {
        a[i].print_information();
    }
    return 0;
}
