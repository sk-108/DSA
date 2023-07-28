#include<iostream>
using namespace std;

class student{
    public : 
    string name;
    int age;
    int rollno;
    student()
    {
        name = "sourav";
        age = 24;
        rollno = 49;
    }
    void display()
    {
        cout<<name<<endl<<age<<endl<<rollno<<endl;
    }
};

int main()
{
    student s1;
    s1.display();


    return 0;
}