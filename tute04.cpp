/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

void Factorial(int no);
long nCr(int n, int r);

int main() {//main fuction begins
  int n, r;//declare variables
  std::cout << "Enter a value for n: ";
  std::cin >> n;
  std::cout << "Enter a value for r: ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}//end of main fuctions

void Factorial(int no)//function factorial begins
{
  long fac =1;
  for (int r=no; r >= 1; r--) {//for loop begins
        fac = fac * r;
    }//for loop ends
}//end of Factorial fuction



long nCr(int n, int r)// function nCr begins
{
  long fac1=1, fac2=1, fac3=1;
  for (int i=n; i >= 1; i--) {//for loop begins
        fac1 = fac1 * i;
    }//for loop ends

  for (int j=r; j >= 1; j--) {//for loop begins
        fac2 = fac2 * j;
    }//for loop ends

  for (int k=(n-r); k >= 1; k--) {//for loop begins
        fac3 = fac3 * (k);
    }//for loop ends

  return fac1/(fac2*fac3);
}// end of function nCr
