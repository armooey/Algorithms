def maxHeapify(heap, i, size):
    l = 2 * i + 1
    r = 2 * i + 2
    if l < size and heap[l] > heap[i]:
        largest = l
    else:
        largest = i
    if r < size and heap[r] > heap[largest]:
        largest = r
    if largest != i:
        heap[i], heap[largest] = heap[largest], heap[i]
        maxHeapify(heap, largest, size)

def buildHeap(heap, size):
    for i in range(int(size/2 - 1), -1, -1):
        maxHeapify(heap, i, size)

def heapSort(heap, size):
    buildHeap(heap, size)
    for i in range(size - 1, 0, -1):
        heap[0], heap[i] = heap[i], heap[0]
        maxHeapify(heap, 0, i)

heap = [22,1,18,6,5,0,32,16,11,13,7]
heapSort(heap, len(heap))
print(heap)