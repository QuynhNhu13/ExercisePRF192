//42 Exercise book
// Write a program in C to sort elements of array in ascending order
// Sap xep cac phan tu cua mang theo thu tu tang dan

#include <stdio.h>

void sortAscending (int arr[], int n){
	int i, j, temp;
	for (i=0; i<n-1; i++){
		for (j=0; j<n-i-1; j++){
			if (arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main (){
	int n;
	printf ("Input n: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Input elements of array: ");
	int i;
	for (i=0; i<n; i++){
		scanf ("%d", &arr[i]);
	}
	
	sortAscending (arr, n);
	
	printf ("Sort elements of array in ascending order: ");
	for (i=0; i<n; i++){
		printf ("%d", arr[i]);
	}
	
	getch();
	return 0;
	
	
}
