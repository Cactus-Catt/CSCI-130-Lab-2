// Lab 2 - Residorf - CSCI 130, Online, Spring 2023 //

#include <stdio.h>

int main(void) {
  
  // Question one //
  
  int x, y, z, b;
  
  //a (with no conversion specifiers)
  
  printf("1, 2, 3, 4\n");

  x= 1;
  y= 2;
  z= 3;
  b= 4;

  //b (with 4 conversion specifiers)
  
  printf( "%d, %d, %d, %d\n", x, y, z, b);

  //c (4 printf statements w/ conversion specifiers)

  printf("1, ");
  printf("2, ");
  printf("3, ");
  printf("4\n");

  // Question 2 //

  float baseA, baseB, height, areaH;

  printf("Enter the first base of the trapezoid: \n");
  scanf("%f", &baseA);

  printf("Eneter the second base of the trapezoid: \n");
  scanf("%f", &baseB);

  printf("Enter the height of the trapezoid: \n");
  scanf("%f", &height);

  areaH=0.5 * (baseA+baseB) * height;

  printf("The area of the trapezoid is: %f \n", areaH);

  // Question 3 //

  int p;
  
  printf("Enter a number: \n");
  scanf("%d", &p);

  if (p >=1000) {
	if (p >1000 ) {
	printf("This is BIG\n");
    }
    }
	else{
		printf("The number is less than 1000\n");
	  }

  // Question 4 //

  int d, c;

  printf("Enter the first number: \n");
  scanf("%d", &d);

  printf("Enter the second number: \n");
  scanf("%d", &c);

  if(d > c) 
      printf("The first number is greater than the second");
   else 
      printf("The first number is not greater than the second");
  
  return 0;
}