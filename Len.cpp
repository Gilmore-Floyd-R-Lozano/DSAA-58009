//#5. Write a Python program to get the length of the array. Original array: numbers = [5, 4, 3, 2, 1]
//C++ Version
#include <iostream>

using namespace std;

int numbers[]= {5,4,3,2,1};
int i;
int main()
{
int size_of_array = sizeof(numbers) / sizeof(int);
cout<<size_of_array;
return 0;
}
