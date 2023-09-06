//#3. Write a Python program to insert a new item before the second element in an existing array. Original array: numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
//C++ Version
#include <iostream>

using namespace std;

int numbers[]= {1,2,3,4,5,6,7,8,9,10};

int i;
int main()
{
int size_of_array = sizeof(numbers) / sizeof(int);
int temp_numbers[size_of_array];
//divide the size of the array by the size of the data type it contains

    for (i=0; i < size_of_array+1; i++)  
    {
        if (i==0)
        {
            temp_numbers[i] = numbers[i];
        }
        else if (i!=1 && i>0)
        {
        temp_numbers[i] = numbers [i-1];
        
        //cout << numbers[i] << ' ';
        //cout<<i;
        }
        else if (i==1)
        temp_numbers[1] = 11;
    }
    
    
     for (i=0; i < size_of_array+1; i++) 
    {
        numbers[i] = temp_numbers[i];
        cout << numbers[i] << ' ';
        //cout<<i;
    }

        return 0;
}
