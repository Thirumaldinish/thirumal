# include <stdio.h>   
int main()   
{   
  int i = 1, Number, Sum = 0 ;   
  printf("\n Please Enter any number \n") ;   
  scanf("%d", &Number) ;   
  while( i < Number )   
   {   
     if(Number % i == 0)   
        Sum = Sum + i ;   
     i++;
   }   
  if (Sum == Number)   
    printf("\n %d is a Perfect Number", Number) ;   
  else   
    printf("\n%d is not the Perfect Number", Number) ;
 return 0 ;   
}
