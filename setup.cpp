#include <iostream>
using std::string;

class Employee{
public:
    string UserName;
    string CompanyName;
    int Age;

    Employee(){}
    
    Employee(string uname, string comname, int uage){
        UserName = uname;
        CompanyName = comname;
        Age = uage;

    }

    void IntroduceYourself(){
        std::cout << "Hey my name is... " << UserName << std::endl;
        std::cout << "I work at... " << CompanyName << std::endl;
        std::cout << "I am... " << Age << " years old!" << std::endl; 
    }
private:
    int idHex;
};

int main()
{
    string name = "Hellp World";
    std::cout << name << std::endl;

    Employee emp1;
    emp1.UserName = "Gregory Salmon";
    emp1.CompanyName = "Bolts and Parts Incorporations";
    emp1.Age = 22;
    emp1.IntroduceYourself();
    Employee emp2 = Employee("Howard Chuck Mcgill","Google Jobs",31);
    emp2.IntroduceYourself();
    
}