#include <stdio.h>

int main() {
    int arr[]={12, 45, 7, 89, 34};
    int max = arr[0];

    for(int i = 1; i < 5; i++){
        if(arr[i]> max)
            max = arr[i];
    }

    printf("Largest number = %d\n", max);
    return 0;
}
