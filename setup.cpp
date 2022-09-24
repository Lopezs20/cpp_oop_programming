#include <iostream>
using std::string;

class Employee{
public:
    string UserName;
    string CompanyName;
    int age;
    int idHex;

    void IntroduceYourself(){
        std::cout << "Hey my name is... " << UserName << std::endl;
        std::cout << "I work at... " << CompanyName << std::endl;
        std::cout << "I am... " << age << " years old!" << std::endl; 
    }
};


int main()
{
    string name = "Hellp World";
    std::cout << name << std::endl;

    Employee emp1;
    emp1.UserName = "Gregory Salmon";
    emp1.CompanyName = "Bolts and Parts Incorporations";
    emp1.age = 22;
    emp1.IntroduceYourself();
}