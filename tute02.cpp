/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()//mian fucntion begins
{
  
  /* double salary, netSalary;
   int etype, otHrs, otRate;
   printf("Enter Employee Type : ");
   scanf("%d", &etype);
   printf("Enter Salary  : ");
   scanf("%f", &salary);
   printf("Enter OtHrs : ");
   scanf("%d", &otHrs); 
   
   switch (etype) {
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }
  
   netSalary = salary + otHrs* otRate;
   printf("Net Salary is %f ", netSalary);
  */

  double salary, netSalary;//declaring variables
   int etype, otHrs, otRate;//declaring variables

  cout<<"Enter Employee Type : ";
  cin>> etype;
  cout<<"Enter Salary  : ";
  cin>>salary;
  cout<<"Enter otHrs  : ";
  cin>>otHrs;

  switch (etype) {//switch statement begins 
      case 1 :
          otRate = 1000;
          break;
      case 2 :
          otRate = 1500;
          break;
      default :
          otRate = 1700;
          break;
   }//switch statement ends
  
   netSalary = salary + otHrs* otRate;//calculation
  cout<<"Net Salaty is :"<<netSalary;
  
  
   return 0;
}// end of man function
