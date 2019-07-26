//In the name of ALLAH
#include <iostream>
using namespace std;

void insertionSort(int* arr, int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int arr[8] = { 3,10,1,8,6,4,15,12 };
	insertionSort(arr, 8);
	for (int i = 0; i < 8; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
