#include <iostream>
using namespace std;

int arr[20];    //Array to be searched
int n;         //Number of elements in the array
int i;        //Index of array element

void input()
{
	while (true)
	{
		cout << "Enter The number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
	}

	// Accept array elements 
	cout << "\n----------------------\n";
	cout << "Enter Element Array\n";
	cout << "------------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

void linearsearch()
{
	char ch;
	int ctr; //Number of comporisons
	int item;

	do
	{
		// Accept the number to be searched
		cout << "\nEnter the element you want to search : ";
		cin >> item;

		ctr = 0;
		i = 0;
		while (i < n)
	{
			ctr++;
			if (arr[i] == item)
			{
				cout << "\n" << "Found at position " << (i + 1) << endl;
				break;
			}
			