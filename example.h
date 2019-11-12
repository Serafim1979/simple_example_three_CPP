#ifndef EXAMPLE_H
#define EXAMPLE_H

int factorial(int n);
int add(int n);
void input_array(int *arr, unsigned int size);
void print_array(int *arr, unsigned int size);
int summ_array(int *arr, unsigned int size);
float average_array(int *arr, unsigned int size);
int max_array(int *arr, unsigned int size);
void input_two_array(int arr[3][3], int N, int M);
void print_two_array(int arr[3][3], int N, int M);
void multiplay_array(int firstArr[][3], int secondArr[][3], int res[][3],
                     int rowFirst, int colFirst, int rowSec, int colSec);

#endif // EXAMPLE_H
