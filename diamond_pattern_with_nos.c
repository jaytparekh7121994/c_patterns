#include<stdio.h>

int main(){
	int i,j,k,n,l;
	printf("Enter the no. to see the mirror pattern: ");
	scanf("%d",&n);
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