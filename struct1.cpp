#include<bits/stdc++.h>
using namespace std;
struct student{
    int roll;
    string name;
    int age;
    float marks;
};
int main(){
struct student s;
cin>>s.roll>>s.name>>s.age>>s.marks;
cout<<"student name: "<<s.name<<"\n"<<"Roll No: "<<s.roll<<endl;
cout<<"student age: "<<s.age<<"\n"<<"Marks: "<<s.marks<<endl;
}
