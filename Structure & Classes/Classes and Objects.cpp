/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
*/

class Student{
    string name;
    int age;
    int rollno;
public:
    // Create funtions here with the name given
void set_variable(string Sname,int Sage,int Srollno){
    name = Sname;
    age = Sage;
    rollno = Srollno;
}

void print_variable(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<rollno<<endl;
}

   

// private:
   
//     string name;
//     int age;
//     int rollno;
};




/*
int main()  {
    Student obj1;
    obj1.set_variable("Robin", 15, 10);
    Student obj2;
    obj2.set_variable("Rahul", 20, 14);
    obj1.print_variable();
    obj2.print_variable();
    return 0;
}
*/
