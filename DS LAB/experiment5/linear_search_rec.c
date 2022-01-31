#include<stdio.h>
int linear_search_rec(int a[],int n,int key);
int main(){
	int a[10];
	int i,n,key,pos;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the elements of array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the key element");
	scanf("%d",&key);
	pos=linear_search_rec(a,n,key);
	if(pos>=0)
	  printf("element found at %d position",pos);
	else 
	   printf("element not found");
	return 0;
}

int linear_search_rec(int a[],int n,int key){
	if(n>0){
		if(a[n-1]==key)
			return n-1;
         else
		 return linear_search_rec(a,n-1,key);
	}
	return -1;

}
