#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  double salary,netSalary;
  int etype, otHrs, otRate;
  cout<<"Enter Employ Type : ";
  cin>>etype;
  cout<<"Enter Salary : ";
  cin>>salary;
  cout<<"Enter otHrs : ";
  cin>>otHrs;

  switch(etype)
  {
    case 1 : otRate = 1000;
             break;
    case 2 : otRate = 1500;
             break;
    default: otRate = 1700;
             break;
  }
  netSalary=salary+otHrs*otRate;
  cout<<"Net Salary is %f "<<netSalary;

  return 0;
}

/*#include <stdio.h>
int main()
{
   double salary, netSalary;
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
  
   return 0;
}*/
