#include<stdio.h>
int r(int);
void main()
{
  int i, j;
  printf("enter any number");
  scanf("%d",&i);
  j=r(i);
  printf("reverse digit is %d",j);

}
r(int p)
{
  int a=0,b=0;

while(p!=0)
{



  a=p%10;
  b=b*10+a;
  p=p/10;
}

  return b;



}
