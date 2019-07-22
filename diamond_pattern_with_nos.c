/*This C program is to print the diamond pattern with numbers. To understand the logic please go to read me.
Output Pattern: for n=4
     1
    121
   12321
  1234321
   12321
    121
     1
*/

#include<stdio.h>

int main(){
	int i,j,k,n,l;
	printf("Enter the no. to see the mirror pattern: ");
	scanf("%d",&n);
	//Upper half of the pattern ie from 1 to 1234321 
	for(i=1;i<=n;i++){
		for(j=1;j<=n-i;j++){
			printf(" ");
		}
		
		for(k=1;k<=i;k++){
			printf("%d",k);   
		}
		
		for(l=i-1;l>=1;l--){
			printf("%d",l);
		}
		printf("\n");
	}
	//Lower half of the patter ie from 12321 to 1
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=1;k<=n-i;k++){
			printf("%d",k);
		}
		for(l=n-i-1;l>=1;l--){
			printf("%d",l);
		}
		printf("\n");
	}	
}
