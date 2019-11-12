#include<iostream>
#include"example.h"

using std::cout;
using std::cin;
using std::endl;

/////////////////////////////////////////////
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
/////////////////////////////////////////////
int add(int n)
{
    if(n != 0)
        return n + add(n - 1);
    return 0;
}
/////////////////////////////////////////////
void input_array(int *arr, unsigned int size)
{
    for(int i = 0; i < size; ++i)
    {
        cout << i + 1 << ". Enter the value of the array element: ";
        cin >> arr[i];
    }
}
/////////////////////////////////////////////
void print_array(int *arr, unsigned int size)
{
    for(int i = 0; i < size; ++i)
    {
        cout << i + 1 << " - " << arr[i] << endl;
    }
}
/////////////////////////////////////////////
int summ_array(int *arr, unsigned int size)
{
    int sum = 0;
    for(int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}
//////////////////////////////////////////////
float average_array(int *arr, unsigned int size)
{
    float sum = 0.0, avg;
    for(int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return avg = sum / size;
}
//////////////////////////////////////////////
int max_array(int *arr, unsigned int size)
{
    int max = arr[0];
    for(int i = 0; i < size; ++i)
    {
        if(arr[0] < arr[i])
            max = arr[i];
    }
    return max;
}
//////////////////////////////////////////////
void input_two_array(int arr[3][3], int N, int M)
{
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cout << "Input element " << i + 1 << " " << j + 1 << " : ";
            cin >> arr[i][j];
        }
    }
}
//////////////////////////////////////////////
void print_two_array(int arr[3][3], int N, int M)
{
        for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
//////////////////////////////////////////////
void multiplay_array(int firstArr[][3], int secondArr[][3], int res[][3],
                     int rowFirst, int colFirst, int rowSec, int colSec)
{
    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            res[i][j] = 0;
        }
    }

    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            for(int k = 0; k < 3; ++k)
            {
                res[i][j] += firstArr[i][k] * secondArr[k][j];
            }
        }
    }
}
