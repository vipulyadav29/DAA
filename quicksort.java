public class quicksort {
    static int partition(int[] a, int low, int high) {
        int pivot = a[low];
        int i = low + 1;
        int j = high;
        while (i <= j) {
            while (i <= high && a[i] <= pivot)
                i++;
            while (a[j] > pivot)
                j--;
            if (i < j) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        int temp = a[low];
        a[low] = a[j];
        a[j] = temp;
        return j;
    }
    static void quickSort(int[] a, int low, int high) {
        if (low < high) {
            int p = partition(a, low, high);
            quickSort(a, low, p - 1);
            quickSort(a, p + 1, high);
        }
    }
    public static void main(String[] args) {
        int[] a = {40, 20, 10, 80, 60, 50, 7, 30, 100};
        quickSort(a, 0, a.length - 1);
        for (int x : a)
            System.out.print(x + " ");
    }
}