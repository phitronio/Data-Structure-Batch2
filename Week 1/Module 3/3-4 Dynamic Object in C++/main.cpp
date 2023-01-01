#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student(string name, int std_id , int age)
    {
        this->name = name;
        this->std_id = std_id;
        this->age = age;
    }

    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";

    }
};

class Rectangle{
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

class Person{
public:
    string name;
    Person *father, *mother;

    void print_info()
    {
        cout<<"Name = "<<name<<"\n";
        cout<<"Fathers name = "<<father->name<<"\n";
        cout<<"Mothers name = "<<mother->name<<"\n";
    }
};


int main()
{
    Student *s = new Student("A" , 10 , 20);

    s->print_information();
    (*s).print_information();

    return 0;
}
