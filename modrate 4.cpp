#include <stdio.h>
 int  main(){
	int i,m,n;
	printf("Enter m value :");
	scanf("%d",&m);
	printf("Enter n value :");
	scanf("%d",&n);
 printf("\nEven Number List :\n ");
if (m % 2 != 0){
	m++;
}
 i = m;
 while(i <= n)
 {
  printf(" %d",i);
  i = i + 2;
 }
printf("\nOdd Number List :\n ");
if (m % 2 == 0){
	m++;
}
i = m ;
 while(i <= n)
 {
  printf(" %d",i);
  i = i + 2;
 }
return 0;
}
