//43 Exercise book
//Write a program in C to sort elements of the array in descending order
//Sap xep ca phan tu cua mang theo thu tu giam

#include<stdio.h>
void sortDescending (int arr[], int n){
	int i, j, temp;
	
	for (i=0; i<n-1; i++){ //vong lap ben ngoai, dai dien cho so lan lap chung
		for (j=0; j<n-i-1; j++){ //vong lap trong mang
			if (arr[j]<arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	int n;
	printf ("Input n: ");
	scanf ("%d", &n);
	
	int arr[n];
	printf ("Input elements of the array: ");
	int i;
	for (i=0; i<n; i++){
		scanf ("%d", &arr[i]);
	}
	
	sortDescending (arr, n);
	
	printf ("Sort elements of the array in descending order: ");
	for (i=0; i<n; i++){
		printf ("%d ", arr[i]);
	}
	
	getch();
	return 0;
	
}
