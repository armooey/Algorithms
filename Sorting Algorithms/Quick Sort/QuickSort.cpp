#include <iostream>
using namespace std;

int partition(int* arr, int l, int h)
{
    int pi = arr[h];
    int i = l - 1;
    for (size_t j = l; j < h ; j++)
    {
        if(arr[j] < pi)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i+1;
    

}

void quick_sort(int* arr, int l, int h)
{
	if (l < h)
	{
		int pi = partition(arr, l, h);
		quick_sort(arr, l, pi - 1);
		quick_sort(arr, pi + 1, h);
	}
}
int main()
{
	int arr[8] = { 3,10,1,8,6,4,15,12 };
	quick_sort(arr, 0, 7);
	for (int i = 0; i < 7; i++)
		cout << arr[i] << endl;
	return 0;
}
