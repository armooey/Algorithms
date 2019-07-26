#In the name of ALLAH
def insertionSort(arr):
    for i in range(1,len(arr)):
        key = arr[i]
        j = i-1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

a = [3 ,5 ,1 ,6,0,14,2]
insertionSort(a)
print(a)

