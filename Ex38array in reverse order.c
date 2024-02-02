//38 Exercise book
//Write a program in C to read n number of values in an array and display it in reverse order
//Doc n so gia tri trong mot mang va hien thi no theo thu tu nguoc lai

#include <stdio.h>

int main(){
	int n;
	printf ("Input size of the array: ");
	scanf ("%d", &n);
	
	int arr[n];
	int i;
	printf ("Input elements of the array: ");
	for (i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf ("Array in reverse order: ");
	for (i=n-1; i>=0; i--){
		printf("%d ", arr[i]);
	}
	
	getch();
	return 0;
}
