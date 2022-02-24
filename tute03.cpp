/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
#include <iomanip>
using namespace std;
int main()//main function begin
{
    /*int no;
    long fac;

    printf("Enter a Number : ");
    scanf("%d", &no);

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    printf("Factorial of %d is %ld\n", no, fac);  */


  int no;//declaring variables
  long fac=1;

  cout<<"Enter the Number:";
  cin>>no;

  for (int r=no; r >= 1; r--) {//for loop begins
        fac = fac * r;
    }//for loop ends

  cout<<"Factorial of "<<no<<" is :"<<fac; 
  
    return 0;
}//end of main fuction
