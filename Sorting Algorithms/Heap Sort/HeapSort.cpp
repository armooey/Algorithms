#include <iostream>
#include <vector>
using namespace std;

void maxHeapify(int* heap,int i,int size)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int largest;
	if (l < size && heap[l] > heap[i])
		largest = l;
	else
		largest = i;
	if (r < size && heap[r] > heap[largest])
		largest = r;
	if (largest != i)
	{
		swap(heap[i], heap[largest]);
		maxHeapify(heap,largest,size);
	}
}
void buildHeap(int* heap,int size)
{
	for (int i = size / 2 - 1; i >= 0; i--)
		maxHeapify(heap,i,size);
}
void heapSort(int* heap,int size)
{
	buildHeap(heap,size);
	for (int i = size - 1; i > 0; i--)
	{
		swap(heap[0], heap[i]);
		maxHeapify(heap,0,i);
	}
}
int main()
{
	int heap[11] = { 22,1,18,6,5,0,32,16,11,13,7 };
	heapSort(heap,11);
	for (int i = 0; i < 11; i++)
		cout << heap[i] << endl;
	return 0;
}