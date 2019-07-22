#include<stdio.h>

int main(){
	int i,j,n,k;
	printf("enter a no. to see the star pattern\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		for(k=n-i;k<=n;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}