public class QuickSort {
    public static void main(String[] args) {
        int[] arr = { 3,10,1,8,6,4,15,12 };
        quick_sort(arr, 0, 7);
        for (int i = 0; i < 7; i++)
            System.out.println(arr[i]);
    }

    public static int partition(int[] arr, int l, int h)
    {
        int pi = arr[h];
        int i = l - 1;
        for (int j = l; j < h ; j++)
        {
            if(arr[j] < pi)
            {
                i++;
                int t =arr[i];
                arr [i] = arr[j];
                arr[j] = t;
            }
        }
        int t =arr[i + 1];
        arr [i + 1] = arr[h];
        arr[h] = t;
        return i+1;


    }

   public static void quick_sort(int[] arr, int l, int h)
    {
        if (l < h)
        {
            int pi = partition(arr, l, h);
            quick_sort(arr, l, pi - 1);
            quick_sort(arr, pi + 1, h);
        }
    }
}
