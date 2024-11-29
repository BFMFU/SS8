#include <stdio.h>
int main() {
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int sum = 0;
    int size = 4;  
    printf("Cac phan tu tren duong cheo phu la: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i][size - i - 1]);  
        sum += arr[i][size - i - 1];  
    }
    printf("\nTong cac phan tu tren duong cheo phu la: %d\n", sum);
    return 0;
}

