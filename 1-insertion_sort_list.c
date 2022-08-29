int *insertionsort(int a[], int m)
{
    for (int i = 1; i < m; i++) {
        int temp, j;
        temp = a[i];
        j = i - 1;
        while ((temp < a[j]) && (j >= 0)) {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = temp;
    }
    return a;
}