#include <iostream>
using std::string;

class Employee{
public:
    Employee(){}
    
    Employee(string uname, string comname, int uage){
        UserName = uname;
        CompanyName = comname;
        Age = uage;

    }

    void IntroduceYourself(){
        std::cout << "Hey my name is... " << getName() << std::endl;
        std::cout << "I work at... " << getCompanyName() << std::endl;
        std::cout << "I am... " << getAge() << " years old!" << std::endl; 
    }

    void setName(string name){
        UserName = name;
    }
    string getName(){
        return UserName;
    }
    string getCompanyName(){
        return CompanyName;
    }
    void setCompanyName(string comname){
        CompanyName = comname;
    }
    void setAge(int newAge){
        Age = newAge;
    }
    int getAge(){
        return Age;
    }
private:
    int idHex;
    string UserName;
    string CompanyName;
    int Age;
};

int main()
{
    string name = "Hello World";
    std::cout << name << std::endl;

    // Testing employee class
    Employee emp1;

    // emp1.Age = 22;
    emp1.setAge(22);

    // emp1.CompanyName = "XXX Incorporations";
    emp1.setCompanyName("Tusken Innernational");

    // emp1.UserName = "Gregory Allen";
    emp1.setName("Garry Allen");

    emp1.IntroduceYourself();

    // Testing Constructors
    Employee emp2 = Employee("Howard Chuck Mcgill","Google Jobs",31);
    emp2.IntroduceYourself();
    
}