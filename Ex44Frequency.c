//Bai 44 Exercise book
//Write a C program to count frequency of each element in an array.
//Dem tan so cua tung phan tu trong mang

#include <stdio.h>

//Ham dem tan suat
void countFrequency (int arr[], int n){
	int freq[n]; //Mang dem tan suat
	int i;
	
	//Khoi tao mang dem tan suat
	for (i=0; i<n; i++){
		freq[i]=0;
	}
	
	//Dem tan suat
	for (i=0; i<n; i++){
		freq[arr[i]]++;
	}
	
	//In tan suat
	printf ("Element          Frequency\n");
	for (i=0; i<n; i++){
		if (freq[i]>0){
			printf ("%d          %d\n", i, freq[i]);
		}
	}	
}

int main (){
	
	int n;
	printf ("Input n: ");
	scanf ("%d", &n);
	
	int arr[n];
	
	printf ("Input elements of the array: \n");
	
	int i;
	for (i=0; i<n; i++){
		scanf ("%d", &arr[i]);
	}
	
	countFrequency (arr, n);
	
	getch();
	return 0;
		
}
