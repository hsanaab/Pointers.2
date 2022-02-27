#include <iostream>
#include <cstring>
using namespace std;

class Employee{
  char *name;
  char ssn[12];
  double salary;
  
  public:
    Employee();
    Employee(const char nm[], const char ss[], double sal){
       int len = strlen(nm);
       name = new char[len + 1];
       strcpy(name, nm);
       memset(ssn, '\0', 12);
       strncpy(ssn, ss, 11);
       salary = sal;
     }
   string getName();
   string getSSN();
   double getSalary();
   	
   void setSalary(double sal);
   	
  	~Employee(){
       delete [] name;
     }
};

int main(){
  
  Employee newGuy("Bob","11111",30000);

  
}