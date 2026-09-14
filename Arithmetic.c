#include<stdio.h>
int main()
{
  int a,b;
  int add,sub,mul,div,remin;
  printf("Enter vales of a & b:");
  scanf("%d %d",&a,&b);
  add=a+b;
  sub=a-b;
  mul=a*b;
  div=a/b;
  remin=a%b;
  printf("%d\n",add);
  printf("%d\n",sub);
  printf("%d\n",mul);
  printf("%d\n",div);
  printf("%d\n",remin);
  return 0;
}


//output
//Enter values of a & b:9 3
//add=12
//sub=6
//mul=27
//div=3
//remin=1
