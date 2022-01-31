#include<stdio.h>
void bubble_sort(int a[],int n);
int main(){
	int i,n;
	int a[10];
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter elements in array");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	bubble_sort(a,n);
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	return 0;
}

void bubble_sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(a[j]>a[j+1])
			{
			    temp=a[j];
			    a[j]=a[j+1];
			    a[j+1]=temp;
			}
		}
	}

}
