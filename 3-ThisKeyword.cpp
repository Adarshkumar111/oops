// #include <iostream>
// using namespace std;

// class Crickter
// {
// public:
//     string name;
//     int runs;

//     Crickter(string n, int r)
//     {
//         name = n;
//         runs = r;
//     }
// };

// void print(Crickter c)
// {
//     cout << c.name << " " << c.runs << endl;
// }

// int main()
// {
//     Crickter c1("virat khhli", 5823);
//     Crickter c2("Rohit", 832);

//     print(c1);
//     print(c2);
// }

// this keyword

#include <iostream>
using namespace std;

class Crickter
{
public:
    string name;
    int runs;

    Crickter(string name, int runs)
    {
        this->name = name; // agar this nahi  denge to koi garbage value aayegi 
        this->runs = runs;
    }
};

void print(Crickter c)
{
    cout << c.name << " " << c.runs << endl;
}

int main()
{
    Crickter c1("virat khhli", 5823);
    Crickter c2("Rohit", 832);

    print(c1);
    print(c2);
}