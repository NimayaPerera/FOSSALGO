#include<stdio.h>
int Search(int ,int ,int);

int main(){
	
	int n,x, arr[100];
	
	printf("enter value for n\n");
	scanf("%d", &n);
	
	printf("enter values for array \n");
	int i;
	for( i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("enter the key\n");
	scanf("%d",&x);
	
	 for ( i = 0; i < n; i++)
        {
            
            if (arr[i] == x){
			// return i;
                printf("%d",i+1);
            }
           // else{
            //	printf("false");
		//	}
	
}
}
