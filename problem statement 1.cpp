/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int addition(int x, int y)
{
  int s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

float addition(float x, float y)
{
  float s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

double addition(double x, double y)
{
  double s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

long double addition(long double x, long double y)
{
  long double s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

long int addition(long int x,long int y)
{
  long int s;
  s = x +y;
  cout << "The sum is: "<< s;
  return s;
}

char addition(char x, char y)
{
  char s;
  s = x +y;
  
  cout << "The sum is: "<< s;

  return s;
}


int main() {
 int a,b;
 float c,d; 
 double e,f;
 long double g,h;
 long int i,j;
 char k,l;
 

 cout << "Enter first int: ";
 cin >> a;
 cout << "Enter second int: ";
 cin >> b;

addition(a,b);

 
  cout << "\n\nEnter first float: ";
 cin >> c;
 cout << "Enter second float: ";
 cin >> d;

addition(c,d);


  cout << "\n\nEnter first double: ";
 cin >> e;
 cout << "Enter second double: ";
 cin >> f;

addition(e,f);

  
  cout << "\n\nEnter first long double: ";
 cin >> g;
 cout << "Enter second long double: ";
 cin >> h;

addition(g,h);

  cout << "\n\nEnter first long int: ";
 cin >> i;
 cout << "Enter second long int: ";
 cin >> j;

addition(i,j);

  cout << "\n\nEnter first char: ";
 cin >> k;
 cout << "Enter second char: ";
 cin >> l;

addition(k,l);

}
