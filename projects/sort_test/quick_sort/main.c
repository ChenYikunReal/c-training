#include <stdio.h>

typedef struct _Range {
    int start, end;
} Range;

Range new_Range(int s, int e) {
    Range r;
    r.start = s;
    r.end = e;
    return r;
}

void swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void quick_sort1(int arr[], const int len) {
    if (len <= 0) {
        return;
    }
    Range r[len];
    int p = 0;
    r[p++] = new_Range(0, len - 1);
    while (p) {
        Range range = r[--p];
        if (range.start >= range.end) {
            continue;
        }
        int mid = arr[(range.start + range.end) / 2];
        int left = range.start, right = range.end;
        do {
            while (arr[left] < mid) {
                ++left;
            }
            while (arr[right] > mid) {
                --right;
            }
            if (left <= right) {
                swap(&arr[left],&arr[right]);
                left++;right--;
            }
        } while (left <= right);
        if (range.start < right) {
            r[p++] = new_Range(range.start, right);
        }
        if (range.end > left) {
            r[p++] = new_Range(left, range.end);
        }
    }
}

void quick_sort_recursive(int arr[], int start, int end) {
    if (start >= end) {
        return;
    }
    int mid = arr[end];
    int left = start, right = end - 1;
    while (left < right) {
        while (arr[left] < mid && left < right) {
            left++;
        }
        while (arr[right] >= mid && left < right) {
            right--;
        }
        swap(&arr[left], &arr[right]);
    }
    if (arr[left] >= arr[end]) {
        swap(&arr[left], &arr[end]);
    } else {
        left++;
    }
    if (left) {
        quick_sort_recursive(arr, start, left - 1);
    }
    quick_sort_recursive(arr, left + 1, end);
}

void quick_sort2(int arr[], int len) {
    quick_sort_recursive(arr, 0, len - 1);
}

int main() {
    int arr1[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    int len = (int) sizeof(arr1) / sizeof(*arr1);
    quick_sort1(arr1, len);
    int i;
    for (i = 0; i < len; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    int arr2[] = {22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
    quick_sort2(arr2, len);
    for (i = 0; i < len; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
