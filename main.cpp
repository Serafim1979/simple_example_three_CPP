#include<iostream>
#include"example.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n;
    cout << "Enter a positive integer: " ;
    cin >> n;
    cout << "Factorial " << n << " = " << factorial(n) << endl;
    cout << n << endl;

    int x;
    cout << "Enter a positive integer: " ;
    cin >> x;
    cout << "Summa = " << add(x) << endl;

    int arr[5];
    input_array(arr, 5);
    print_array(arr, 5);
    cout << "Summa array = " << summ_array(arr, 5) << endl;
    cout << "Average array = " << average_array(arr, 5) << endl;
    cout << "Maximum = " << max_array(arr, 5) << endl;

    int matrix_one[3][3];
    int matrix_two[3][3];
    int matrix_rezult[3][3];
    cout << "====================================" << endl;
    cout << "Input value matrix 1: " << endl;
    input_two_array(matrix_one, 3, 3);
    cout << endl;
    cout << "Input value matrix 2: " << endl;
    input_two_array(matrix_two, 3, 3);

    cout << endl;
    cout <<"\tMatrix 1" << endl;
    print_two_array(matrix_one, 3, 3);
    cout << endl;
    cout <<"\tMatrix 2" << endl;
    print_two_array(matrix_two, 3, 3);

    for(int i = 0; i < 3; ++i)
    {
        for(int j = 0; j < 3; ++j)
        {
            matrix_rezult[i][j] = matrix_one[i][j] + matrix_two[i][j];
        }
    }

    cout << endl;
    cout << "\tSumma two matrices " << endl;
    print_two_array(matrix_rezult, 3, 3);

    cout << endl;

    multiplay_array(matrix_one, matrix_two,  matrix_rezult, 3, 3, 3, 3);

    cout << "\tThe multiplication of two matrices " << endl;
    print_two_array(matrix_rezult, 3, 3);


    return 0;
}
