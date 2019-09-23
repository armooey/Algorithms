def partition(arr, l, h):
    pi = arr[h]
    i = l - 1
    for j in range(l, h):
        if arr[j] < pi:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i + 1], arr[h] = arr[h], arr[i + 1]
    return i + 1


def quick_sort(arr, l, h):
    if l < h:
        pi = partition(arr, l, h)
        quick_sort(arr, l, pi - 1)
        quick_sort(arr, pi + 1, h)


arr = [3, 10, 1, 8, 6, 4, 15, 12]
quick_sort(arr, 0, 7)
print(arr)
