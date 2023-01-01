#include<bits/stdc++.h>

using namespace std;

class Student
{
private:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
public:
    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }

    void setInformation(string s, int id, int ag)
    {
        name = s;
        std_id = id;
        age = ag;
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

    void print_info()
    {
        cout<<"Name = "<<name<<"\n";
        cout<<"Fathers name = "<<father->name<<"\n";
        cout<<"Mothers name = "<<mother->name<<"\n";
    }
};


class User
{
protected:
    string name;
    int age;
};

class Admin: User
{
private:
    string designation;
public:
    void Set(string s, int ag , string dg)
    {
        name = s;
        age = ag;
        designation = dg;
    }
    void print()
    {
        cout<<name<<"\n";
        cout<<age<<"\n";
        cout<<designation<<"\n";
    }
};



int main()
{
//    Student s;
//    s.setInformation("A", 10, 20);
//    s.print_information();
    Admin ad;
    ad.Set("A" , 20 , "D");
    ad.print();
    return 0;
}
/*
public

private

protected

*/
