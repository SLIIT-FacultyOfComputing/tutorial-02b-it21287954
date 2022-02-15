/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}*/

#include <iostream>

long nCr(int n, int r);

int main() 
{
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
long nCr(int n, int r)
{
	int facn = 1;
	int facr = 1;
	int nCr = 0;
	int i;
    for (int i=n; i >= 1; i--) 
	{
        facn = facn * i;
    }
	for (int i=r; i >= 1; i--) 
	{
        facr = facr * i;
    }
    nCr = facn / facr * (n-r);
}

