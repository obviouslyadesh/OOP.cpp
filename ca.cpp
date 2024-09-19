// #include <iostream>
// using namespace std;

// class Employee
// {
// public:
//     string Name;
//     string Company;
//     int Age;

//     void IntroduceYourself(){
//         cout <<"Name - " << Name << endl;
//         cout <<"Company -" << Company << endl;
//         cout <<"Age - " << Age << endl;
//     }

//     Employee(string name, string company, int age)
//     {
//         Name = name;
//         Company = company;
//         Age = age;
//     }
// };

// int main()
// {
//     Employee employee1 = Employee("Adesh", "XYZ", 20);
//     employee1.IntroduceYourself();

//     Employee employee2 = Employee("Ram", "Amazon", 33);
//     employee2.IntroduceYourself();
// }


// Encapsulation 19th september - making attributes private/hidden from other however can be accesed with getter or setter methods


// #include <iostream>
// using namespace std;

// class Employee
// {
// private:
//     string Name;
//     string Company;
//     int Age;

// public:
//     void setName(string name)  //setter
//     {
//         Name = name;
//     }

//     string getName()  //getter
//     {
//         return Name;
//     }

//     void setCompany(string company)  //setter
//     {
//         Company = company;
//     }

//     string getCompany()  //getter
//     {
//         return Company;
//     }

//     void setAge(int age)  //setter
//     {
//         if (age >= 18)
//         Age = age;
//     }

//     int getAge()  //getter
//     {
//         return Age;
//     }


//     void IntroduceYourself(){
//         cout <<"Name - " << Name << endl;
//         cout <<"Company -" << Company << endl;
//         cout <<"Age - " << Age << endl;
//     }

//     Employee(string name, string company, int age)
//     {
//         Name = name;
//         Company = company;
//         Age = age;
//     }
// };

// int main()
// {
//     Employee employee1 = Employee("Adesh", "XYZ", 20);
//     employee1.IntroduceYourself();

//     Employee employee2 = Employee("Ram", "Amazon", 33);
//     employee2.IntroduceYourself();

//     employee1.setAge(16);
//     cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
    
//     return 0;
// }




// Abstraction 19th september - hiding complex things behind the procedure that make those things look simple

#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;

};

class Employee: AbstractEmployee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name)  //setter
    {
        Name = name;
    }

    string getName()  //getter
    {
        return Name;
    }

    void setCompany(string company)  //setter
    {
        Company = company;
    }

    string getCompany()  //getter
    {
        return Company;
    }

    void setAge(int age)  //setter
    {
        if (age >= 18)
        Age = age;
    }

    int getAge()  //getter
    {
        return Age;
    }


    void IntroduceYourself(){
        cout <<"Name - " << Name << endl;
        cout <<"Company -" << Company << endl;
        cout <<"Age - " << Age << endl;
    }

    void AskForPromotion()
    {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " Sorry, No promotion" << endl;
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


    Employee employee2 = Employee("Ram", "Amazon", 33);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
    
    return 0;
}