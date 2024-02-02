//40 Exercise book
//Write a program in C to find the maximum and minimum elements in an array
//Viet mot chuong trinh bang C de tim phan tu lon nhat va nho nhat trong mot mang

#include<stdio.h>

void findMaxMin (int arr[], int n){
	int i, max, min;
	
		max=arr[0];
	for (i=0; i<n; i++){
		if (max<arr[i]){
			max=arr[i];
		}
	}
	printf ("Maximum elements in an array: %d", max);
	
		min=arr[0];
	for (i=0; i<n; i++){
		if (min>arr[i]){
			min=arr[i];
		}
	}
	printf ("\nMinimum elements in an array: %d", min);
}

int main(){
	int n;
	printf ("Input size of the array: ");
	scanf ("%d", &n);
	int arr[n];
	int i;
	printf ("Input elemnets of the array: ");
	for (i=0; i<n; i++){
		scanf ("%d", &arr[i]);
	}
	
	findMaxMin (arr, n);
	
	getch();
	return 0;
}
