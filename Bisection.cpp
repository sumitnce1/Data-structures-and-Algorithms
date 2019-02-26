#include<stdio.h>
#include<math.h>
#define ERR 0.01
double func(double x)
{
	return(2-x*x);
	
 }
 void bisection(double a,double b)
 {
 	int i=0;
 	if(func(a)*func(b)>=0.0)
 	{
      	printf("VALUSE ARE OF WORNG A AND B : \n");
     	return;
 }
      double c=a;
        while((b-a)>=ERR)
 {
       	i++;
      	c=(a+b)/2;
       	if(func(c)==0.0)
  	{
 	 	break;
 	}
      	else if(func(a)*func(c)<0.0)
 	{
 		b=c;
 	}
      	else
      	a=c;
      	printf("NUMBER OF ITERATION: %d VALUE OF C %f\n",i,c);
 	
 }
      printf("ROOT :- %lf \n",c);
      printf("NUMBER OF ITERATION : %d",i);
      return;
}
int main()
{
	 double a=0, b=2;
	 bisection(a,b);
	 return 0;
}
