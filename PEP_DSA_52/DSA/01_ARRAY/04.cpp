void reverseArray(int arr[], int size) {
int start = 0, end = size - 1;
while (start < end) {
// Swap the elements
int temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;

// Move the pointers
start++;
end--;
}
}