// #include<iostream>
// using namespace std; 
// class Student{
//     public:
//     string name;
//     int rno;
//     float gpa;

//     // constructor
//     Student(string s, int r, float g){ // jo fxn ka name hoga wahi  constructor ka name hoga 
//         name=s;
//         rno=r;
//         gpa=g;
//     }
// };

// void print (Student s){
//     cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
// }
// int main(){
//     Student s1("Adarsh bishwas", 76, 8.2);
//     print(s1);


// }



// code - 2

#include<iostream>
using namespace std; 
class Student{
    public:
    string name;
    int rno;
    float gpa;

    // constructor
    // default constructor jo hamesha hota hai 
    Student(){

    }
    Student(string s, int r){ // parametrized constructor
        name=s;
        rno=r;
    }
    Student(string s, int r, float g){ // parametrized constructor
        name=s;
        rno=r;
        gpa=g;
    }
    Student(int r, string s, float g){
        rno=r;
        name=s;
        gpa=g;
    }
};

void print (Student s){
    cout<<s.name<<" "<<s.rno<<" "<<s.gpa<<endl;
}
int main(){
    Student s1("Adarsh bishwas", 76);
    s1.gpa=834.532;
    print(s1);

    Student s2;
    s2.name="Himanshu";
    s2.rno=21;
    s2.gpa=32.3;

    print(s2);

    Student s3("gagan", 54,53.4);
    print(s3);

    Student s5(5,"anshu", 54.33);
    print(s5);

    Student s6=s1; // Deep copy
    s6.name="manish";
    print(s6);

    Student s7(s1); // copy coonstructor
    s7.name="vijay"; // deep copy
    print(s7);
}