#include<stdio.h>
int main()
{
  int square,side;
  printf("Enter side of square:");
  scanf("%d",side);
  area=side*side;
  perimeter=4*side;
  printf("area=%d",area);
  printf("perimeter=%d",perimeter);
  return 0;
}


//output 
//Enter side of square:5
//area= 25
//perimeter=20
