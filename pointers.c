#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  float d;
  float* ptrtod;

  float e;
  float* ptrtoe;

  ptrtoa = &a;
  ptrtod = &d;
  ptrtoe = &e; 


  a = 5;
  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);  
  printf("The value of a is %d\n", a);



  
  d = 15; 
  printf("The value of d is %f\n", d);
  printf("It  stores the value %f\n", *ptrtod);
  printf("The address of d is %f\n", &d);


  e = 25;
  printf("The value of e is %f\n", e);
  printf("It stores the vaue %f\n", *ptrtoe);
  printf("The address of e is %f\n", &e);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

float temp;
temp = *ptrtoe;
*ptrtoe = *ptrtod;
*ptrtod = temp;

printf("The value of d is %f\n", d);
printf("The value of e is %f\n", e);
 







}
