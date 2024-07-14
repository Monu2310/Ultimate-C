#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int* ptr;
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit program if memory allocation fails
    }
    // int arr[n]; // Not allowed in c
    ptr[0] = 3; 
    printf("%d", ptr[0]);

    free(ptr); // Free allocated memory
    return 0;
}