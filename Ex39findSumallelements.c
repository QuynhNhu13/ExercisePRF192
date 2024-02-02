//39 Exercise book
//Write a program in C to find the sum of all elements of the array
//Viet mot chuong trinh bang C de tim tong cua tat ca cac phan tu cua mang

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
	
	int sum=0;
	for (i=0; i<n; i++){
		sum += arr[i];
	}
	printf ("Sum of all elements of the array: %d", sum);
	
	getch();
	return 0;
}
