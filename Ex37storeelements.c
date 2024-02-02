//37 Exercise book
//Write a program in C to store elements in an array and print it
//Luu tru cac phan tu va in no

#include<stdio.h>
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
	
	printf ("Elements in the array: ");
	for (i=0; i<n; i++){
		printf ("%d ", arr[i]);
	}
	
	getch();
	return 0;
}
