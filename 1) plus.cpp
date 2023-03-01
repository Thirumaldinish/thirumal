#include <stdio.h>
#include <math.h>
int main() {
    int powr(int, int);
    int add(int, int );
    int sub(int , int );
    int multi(int,int);
    int div(int,int);
    int a,b,ch;
    printf("enter number");
    scanf("%d",&ch);
    printf("enter values for a, b");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1:
          printf("%d",powr(a,b));
          break;
        case 2:
          printf("%d",add(a,b));
          break;
        case 3:
          printf("%d",sub(a,b));
          break;  
        case 4:
          printf("%d",multi(a,b));
          break;
        case 5:
		  printf("%d",div(a,b));
		  break;  
    }
  return 0;
}
int powr(int a, int b)
{
    return(pow(a,b));
}
int add(int a, int b)
{
    return(a+b);
}
int sub(int a, int b)
{
    return(a-b);
}
int multi(int a, int b)
{
    return(a*b);
}
int div(int a, int b)
{
    return(a/b);
}
