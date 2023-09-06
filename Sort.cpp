//#4. Write a Python program to reverse the order of the items in the array.Original array: numbers = [5, 4, 3, 2, 1]
//C++ Version

#include <iostream>
using namespace std;

int numbers[]= {5,4,3,2,1};
int i,temp_num;
int main()
{
int size_of_array = sizeof(numbers) / sizeof(int);
//divide the size of the array by the size of the data type it contains
for (i = 0; i < size_of_array; i++) 
{
    for (int x = i + 1; x < size_of_array; x++) 
    {
        if (numbers[i] > numbers[x]) 
        {
                temp_num = numbers[i];
                numbers[i] = numbers[x];
                numbers[x] = temp_num;
        }
    }
}
    for (i=0; i < size_of_array; i++) 
    {
        cout << numbers[i] << ' ';
        //cout<<i;
    }
        return 0;
}