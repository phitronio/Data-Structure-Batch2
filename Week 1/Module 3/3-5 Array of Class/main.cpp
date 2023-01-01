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

    ~Student()
    {
//        cout<<"Called ";
//        print_information();
    }
};

class Rectangle
{
public:
    int width,height;
    Student s;
    //area
    int calculate_area()
    {
        return height*width;
    }
    //perimeter
    int calculate_perimeter()
    {
        return 2*(height + width);
    }
};

class Person
{
public:
    string name;
    Person *father, *mother;

    Person()
    {
        father = NULL;
        mother = NULL;
    }
    Person(string name, string f_name, string m_name)
    {
        this->name = name;
        father = new Person;
        father->name = f_name;
        mother = new Person;
        mother->name = m_name;
    }
    void print_info()
    {
        cout<<"Name = "<<name<<"\n";
        cout<<"Fathers name = "<<father->name<<"\n";
        cout<<"Mothers name = "<<mother->name<<"\n";
    }
    ~Person()
    {
        cout<<"Called\n";
        if(father != NULL)
            delete father;
        if(mother != NULL)
            delete mother;
    }
};


int main()
{
    int a[10];
    Student s[10];
    for(int i=0;i<10;i++)
    {
        s[i] = Student("A" , i , 20);
    }
    for(int i=0;i<10;i++)
    {
        s[i].print_information();
    }
    return 0;
}
