// Draw Heart 
#include<stdio.h>

int main(){
	int i,j;
	int n=7;
	int m=7;
	printf("      I LOVE YOU\n");
	for (i=1;i<n;i++)
	{
		for(j=1;j<=n;j++){
			if(!((i==1 && (j == 1 || j==4 || j==7))
			|| (i==4 && (j==1 || j==7))
			|| ( i == 5 && (j<=2 || j >= 6))
			|| (i==6 && ( j <=3 || j >=5)))){
				printf(" * ");
			} else {
				printf("   ");
			}
	   }
	   printf("\n");
   }
   return 0;
   
}
			
