import java.util.Arrays;

public class HeapSort {
    public static void main(String[] args) {
        int[] heap = {22,1,18,6,5,0,32,16,11,13,7};
        heapSort(heap,heap.length);
        System.out.println(Arrays.toString(heap));
    }
    public static void maxHeapify(int[] heap,int i,int size)
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
            int temp = heap[i];
            heap[i] = heap[largest];
            heap[largest] = temp;
            maxHeapify(heap,largest,size);
        }
    }
    public static void buildHeap(int[] heap,int size)
    {
        for (int i = size / 2 - 1; i >= 0; i--)
            maxHeapify(heap,i,size);
    }
    public static void heapSort(int[] heap,int size)
    {
        buildHeap(heap,size);
        for (int i = size - 1; i > 0; i--)
        {
            int temp = heap[0];
            heap[0] = heap[i];
            heap[i] = temp;
            maxHeapify(heap,0,i);
        }
    }
}
