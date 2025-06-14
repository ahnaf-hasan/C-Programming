//Let's Start
#include <stdio.h>

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int sum = 0;

    // Loop through the array and calculate the sum
    for(int i = 0; i < 6; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}
