#include<iostream>
using namespace std;

class Student{ // student is a new data type
public:
    string name;
    int rno;
    float cgpa;
};

class Car{
public:
    string name;
    string model;
    int price;
};

void print(Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.cgpa<<endl;
}

void change(Student& s){
    s.name="bishwas";
}



int main(){
    // int x=4;
    // cout<<x<<endl; // 4
    // change(x);
    // cout<<x<<endl; // 4


    Student s1;
    s1.name="Adarsh";
    s1.rno=1;
    s1.cgpa=8.2;

    print (s1);
    change(s1);
    print(s1);



    Student s2;
    s2.name="kumar";
    s2.rno=2;
    s2.cgpa=8.5;

    Student s3;
    s3.name="anshu";
    s3.rno=3;
    s3.cgpa=8.1;

    Car c1;
    c1.name="BMW";
    c1.model="X5";
    c1.price=5000000;

//    print(s1);
//    print(s2);
//    print(s3);

    // cout<<c1.name<<" "<<c1.model<<" "<<c1.price<<endl; 
} 