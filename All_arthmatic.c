#include<stdio.h>
int main()
{
  int a,b;
  int add,sub,multi,div,remin;
  printf("Enter value of a:");
  scanf("%d",&a);
  printf("Enter value of b:");
  scanf("%d",&b);
  add=a+b;
  sub=a-b;
  multi=a*b;
  div=a/b;
  remin=a%b;
  printf("add=%d\n",add);
  printf("sub=%d\n",sub);
  printf("multi=%d\n",multi);
  printf("div=%d\n",div);
  printf("remin=%d\n",remin);
  return 0;
}

//output
//Enter value of a:9
//Enter value of b:3
//add=12
//sub=6
//multi=27
//div=3
//remin=1
