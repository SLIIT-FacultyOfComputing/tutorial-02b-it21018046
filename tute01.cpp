#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  float cm,inches;
  cout<<"Enter a length in cm : ";
  cin>>cm;
  inches=cm/2.54;
  cout<<"Length in inches is "<<inches<<endl;
  return 0;
}

/*#include <stdio.h>
int main() 
{
    float cm, inches;
    printf("Enter a length in cm : ");
    scanf("%f",&cm);
    inches = cm / 2.54;
    printf("Length in inches is %f \n", inches);
    return 0;
}  
*/