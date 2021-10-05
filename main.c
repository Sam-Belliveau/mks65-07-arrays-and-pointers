#include <stdio.h>

#define ARR_LENGTH 8

void print_array(int* arr, int len);
double get_average(int* arr, int len);

int main(void)
{
    int arr_a[ARR_LENGTH] = { 16, 45, 39, 527, 6, 19, 1202, 1201 };
    int arr_b[ARR_LENGTH] = { 53, 49, 69, 72, 27, 1000000, 200000, 4 };

    printf("Arrays:\n");
    printf("arr_a: ");
    print_array(arr_a, ARR_LENGTH);

    printf("arr_b: ");
    print_array(arr_b, ARR_LENGTH);
    

    printf("\nAverages:\n");
    printf("arr_a - average: %f\n", get_average(arr_a, ARR_LENGTH));
    printf("arr_b - average: %f\n", get_average(arr_b, ARR_LENGTH));
}


void print_array(int* arr, int len) 
{
    int* end = arr + len;

    printf("[");
    while (arr < end) printf(" %d", *(arr++));
    printf(" ]\n");

    return;
}


double get_average(int* arr, int len) 
{
    int* end = arr + len;
    double avg = 0.0;

    while (arr < end) avg += (double) *(arr++);

    return avg /= (double) len;
}