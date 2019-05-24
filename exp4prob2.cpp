#include <iostream>
#include <conio.h>

using namespace std;

void swapping(int &x, int &y)	
{	
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void display(int *array, int size)	
{	
	for(int a = 0; a < size; a++)	
	{
		cout << array[a] << " ";
	}
}

void selectionSort(int *array, int size)	
{
	int a, b, minimum;
	for(int a = 0; a < size - a; a++)	
	{  
		minimum = a;	
		for(int b = a + 1; b < size; b++)
			if(array[b] < array[minimum])
			minimum = b;
		swap(array[a], array[minimum]);	
	}
}

int main()	
{
	int number;
	
	cout << "Selection sorting...\n" << endl
		 << "Enter the array size: ";
	cin >> number;
   
	int arr[number];
	
	cout << "Enter the " << number << " elements: \n" << endl;
	
	for(int a = 0; a < number; a++)	
	{	
      cin >> arr[a];
	}
   
	cout << "\nYour data: ";
	display(arr, number);	
   
	selectionSort(arr, number);	
	
	cout << "\n\nAfter using selection or bubble sort...\n\n" << "Sorted data: ";
	display(arr, number);
	
	_getch();
	return 0;
}
