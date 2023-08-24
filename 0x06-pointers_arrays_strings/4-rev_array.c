/**
 * reverse_array - Reverses the elements in an integer array.
 * @a: Pointer to the beginning of the array.
 * @n: Number of elements in the array.
 *
 * This function takes an integer array and its size
 * then reverses the order
 * of the elements in the array in place.
 */
void reverse_array(int *a, int n)
{
int x[14];
int i, j;
for (i = 0; i < n; i++)
{
x[i] = a[i];
}
for (j = 0; j < i; j++)
{
a[n - 1] = x[j];
n--;
}
}
