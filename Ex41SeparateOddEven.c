//41 Exercise book
//Write a program in C to separate odd and even integers in separate array
//Viet mot chuong trinh tach ca so nguyen le va chan trong cac mang rieng biet

#include <stdio.h>

void sepOddEven (int arr[], int n){
	int i;
	
	printf ("Odd integers in separate array: ");
	for (i=0; i<n; i++){
		if (arr[i]%2==0){
			printf ("%d ", arr[i]);
		}
	}
	
	printf ("\nEven integers in separate array: ");
	for (i=0; i<n; i++){
		if (arr[i]%2!=0){
			printf ("%d ", arr[i]);
		}
	}
}

int main(){
	int n;
	printf ("Input size of the array: ");
	scanf ("%d", &n);
	
	int arr[n];
	int i;
	printf ("Input elements of the array: ");
	for (i=0; i<n; i++){
		scanf ("%d", &arr[i]);
	}
	
	sepOddEven (arr, n);
	
	getch();
	return 0;
}


