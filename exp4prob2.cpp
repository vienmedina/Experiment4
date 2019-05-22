/*****************************************************************************************************
PROBLEM 2: Create a C++ functional program that sorts n number of elements using either selection or
bubble sort.

Selection Sorting…
Enter the array size: 5
Enter the 5 elements:
100 50 22 101 200
Your data: 100 50 22 101 200
After using selection or bubble sort…
Sorted data: 22 50 100 101 200
*****************************************************************************************************/

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main ()
{
	string arr[5], temp;
	char a, b;
	int s;
	
	cout << "Selection Sorting\.\.\. \n"
		 << "Enter array size : ";	cin >> s;
		 	
	cout << "Enter the " << s << " elements : ";
	
	for(a = 0; a < s; a++)	{
		cin >> arr[a];
	}

	cout << "Your data: ";
	
	for(a = 0; a < s; a++)	{
		cout << arr[a] << ' ';
	}

	for (a = 0; a < s; a++)	{
		for (b = a + 1; b < s; b++)	{
			if (arr[a]>arr[b])	{
				temp = arr[a];
				arr[a] = arr[b];
				arr[b] = temp;
			}
		}
	}
	
	cout << "\nAfter using selection or bubble sort\.\.\.\n";
	
	cout << "Sorted data : ";
	for(a = 0; a < s; a++)	{
		cout << arr[a] << " ";
	}
	
	getch();
	return 0;
}
