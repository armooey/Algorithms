#include <iostream>
using namespace std;

void merge(int* arr, int p, int q, int r)
{
	int n1 = q - p + 1;
	int n2 = r - q;
	int* L = new int[n1];
	int* R = new int[n2];
	for (int i = 0; i < n1; i++)
		L[i] = arr[p + i];
	for (int i = 0; i < n2; i++)
		R[i] = arr[q + i + 1];
	int i = 0, j = 0, k = p;
	while (i < n1 && j < n2)
	{
		if (L[i] < R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}
void merge_sort(int* arr, int p, int r)
{
	if (p < r)
	{
		int q = p + (r - p) / 2;
		merge_sort(arr, p, q);
		merge_sort(arr, q + 1, r);
		merge(arr, p, q, r);
	}
}
int main()
{
	int arr[8] = { 3,10,1,8,6,4,15,12 };
	merge_sort(arr, 0, 7);
	for (int i = 0; i < 7; i++)
		cout << arr[i] << endl;
	return 0;
}
