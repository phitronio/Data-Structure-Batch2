#include<bits/stdc++.h>

using namespace std;

class Student{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

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
    Person p;
    p.father = new Person;
    p.mother = new Person;
    p.name = "A";
    p.father->name = "B";
    p.mother->name = "C";
    p.print_info();
//    Rectangle r1,r2;
//    r1.height = 4;
//    r1.width = 8;
//    cout<<r1.calculate_area()<<"\n";
//    cout<<r1.calculate_perimeter()<<"\n";
//    r1.s.name = "X";
//
//    r1.s.print_information();
//
//    r2.height = 3;
//    r2.width = 9;
//    cout<<r2.calculate_area()<<"\n";
//    cout<<r2.calculate_perimeter()<<"\n";
//    Student s;
//    s.name = "Apurba";
//    s.std_id = 1705056;
//    s.age = 24;
//    s.fathers_name = "Dulal Saha";
//    s.mothers_name = "Radha Saha";
//
//    s.print_information();
//
//    Student s2;
//    s2.name = "Rittik";
//    s2.std_id = 1705057;
//    s2.age = 23;
//    s2.fathers_name = "X";
//    s2.mothers_name = "Y";
//
//    s2.print_information();

    return 0;
}
