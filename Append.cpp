//2. Write a Python program to append a new item to the end of the array. Original array: numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
//C++ Version
#include <iostream>

using namespace std;

int numbers[]= {1,2,3,4,5,6,7,8,9,10};
int i;
int main()
{
int size_of_array = sizeof(numbers) / sizeof(int);
//divide the size of the array by the size of the data type it contains

    for (i=0; i < size_of_array; i++) 
    {
        cout << numbers[i] << ' ';
        //cout<<i;
    }
        numbers[size_of_array+1] = 11;
        cout<<numbers[size_of_array+1] <<' ';
        return 0;
}
