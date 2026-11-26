#include <stdio.h>

static void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ShakeSort(int N, int* arr) {
    int L = 1;
    int R = N - 1;
    do 
    {
        for (int j = R; j >= L; j--) 
        {
            if (arr[j - 1] > arr[j]) 
            {
                Swap(&arr[j - 1], &arr[j]);
            }
        }
        L++;

        for (int j = L; j <= R; j++) 
        {
            if (arr[j - 1] > arr[j]) 
            {
                Swap(&arr[j - 1], &arr[j]);
            }
        }
        R--;
    } while (L <= R);
}
