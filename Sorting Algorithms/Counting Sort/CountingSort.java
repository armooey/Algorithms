public class CountingSort {
    public static void main(String[] args) {
        int[] arr = { 3,10,1,8,6,4,15,12 };
        counting_sort(arr, 15, 8);
        for (int i = 0; i < 8; i++)
            System.out.println(arr[i]);
    }



    public static void counting_sort(int[] arr, int max, int size)
    {
        int[] temp = new int[max + 1];
        int[] res = new int [size];
        for (int i = 0; i <= max; i++)
        {
            temp[i] = 0;
        }

        for (int i = 0; i < size; i++)
        {
            temp[arr[i]]++;
        }

        for (int i = 1; i <= max; i++)
        {
            temp[i] += temp[i - 1];
        }

        for (int i = size - 1; i >= 0; i--)
        {
            res[temp[arr[i]] - 1] = arr[i];
            temp[arr[i]]--;
        }

        for (int i = 0; i < size; i++)
        {
            arr[i] = res[i];
        }
    }
}
