public class InsertionSort {
    public static void main(String[] args) {
        int[] arr = {3,5 ,1 ,2, 4,10,0,6};
        insertionSort(arr);
        for (int i = 0; i <arr.length ; i++) {
            System.out.println(arr[i]);
        }
    }
    public static void insertionSort(int[] arr)
    {
        for (int i = 0; i < arr.length; i++) {
            int key = arr[i];
            int j = i - 1;
            while(j >= 0 && arr[j] > key)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
}
