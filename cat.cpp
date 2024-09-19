// #include <iostream>
// using namespace std;

// class Employee
// {
// public:
//     string Name;
//     string Company;
//     int Age;

//     void IntroduceYourself(){
//         cout << "Name -" << Name << endl;
//         cout << "Company -" << Company << endl;
//         cout << "Age -" << Age << endl;
//     }

//     Employee(string name, string company, int age)
// {
//     Name = name;
//     Company = company;
//     Age = age;
// }

// };



// int main()
// {
//     Employee employee1 = Employee("Adesh", "XYZ", 20);
//     employee1.IntroduceYourself();
//     Employee employee2 = Employee("Ram", "Amazon", 33);
//     employee2.IntroduceYourself();
//     return 0;
// }

#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

};



int main()
{
    Employee employee1 = Employee("Adesh", "XYZ", 20);
    employee1.IntroduceYourself();


    Employee employee2 = Employee("Ram", "Amazon", 33);
    employee2.IntroduceYourself();
    return 0;
}