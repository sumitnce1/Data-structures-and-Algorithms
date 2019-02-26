/* SUMIT KUMAR
C++ program for Newton Raphson Method for solving equations. */

#include<bits/stdc++.h> /* all header file includes this library eg.- #include<math.h> */
#define EPSILON 0.001 
using namespace std; 
double func(double x) 
   { 
    return x*x*x - x*x + 2; 
   } 
  double derivFunc(double x) 
   { 
    return 3*x*x - 2*x; 
   } 
  void newtonRaphson(double x) 
  { 
    double h = func(x) / derivFunc(x); 
    while (abs(h) >= EPSILON) 
    { 
        h = func(x)/derivFunc(x);
        // x(i+1) = x(i) - f(x) / f'(x)   
        x = x - h; 
    } 
    cout << "The value of the root is : " << x; 
  } 
int main() 
{ 
    double x0 = -20;          // Initial values assume
    newtonRaphson(x0); 
    return 0; 
}
