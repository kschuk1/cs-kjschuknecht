/*
FIXME1: Include program and programmer information, date, etc.
Author kyle schuknecht
Date 4/1/2024
The lab demostrates the use of array and some operations on array.
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cstdio>

using namespace std;

using big_int = long long int;

// function that reads numbers
void readData(int *, int);
// function that finds max & min numbers from given array of numbers
void findMaxAndMin(int *, int, int &, int &);
// function that finds the sum of the numbers in a given array
big_int findSum(int *, int);
// function that sorts the numbes into ascending order
void bubbleSort(int *, int);
// function that prints each element in the array
void printArray(int *, int);
// crux of the program is done in this function
void program();

int main(int argc, char *argv[])
{
    char ans = 'y';
    do
    {
        program();
        cin.ignore(1000, '\n');
        cout << "Would you like to run the program again?[y/n]: ";
        cin >> ans;
    } while (ans == 'y');

    cin.ignore(1000, '\n');
    cout << "All done. Enter to exit...";
    cin.get();
    return 0;
}

// crux of the program
void program()
{
    size_t size;
    cout << "This program finds statistical values of some integers entered by the user.\n";
    cout << "How many nubers would like to enter? ";
    cin >> size;
    int *nums = new int[size]; // declare a dynamic int array of size
    int max, min;
    readData(nums, size); // read the data into nums array
    printf("Done reading %zu data numbers.\n", size);
    printArray(nums, size); // print the array to check if the values are there
    findMaxAndMin(nums, size, max, min);
    printf("Max = %u\n", max);
    
    printf("Max = %u\n", min);
    printf("Sum = %lld\n", findSum(nums, size));
    cout << "Sorted list in ascending order:\n";
    bubbleSort(nums, size);
    
    cout << "[ ";
    for (size_t i = 0; i < size; i++)
    {
        cout << nums[i] << ' ';
    }
    cout << "] \n";
    delete[] nums;
}

// read data from a file and store it in into given nums array.
void readData(int nums[], int size)
{
    cout << "You've asked to enter " << size << " integers.\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an integer: ";
        cin >> nums[i];
    }
}

void printArray(int nums[], int len)
{
    cout << "[ ";
    for (int i = 0; i < len; i++)
        cout << nums[i] << " ";
    cout << "]" << endl;
}

void findMaxAndMin(int nums[], int len, int &max, int &min)
{
    max = nums[0]; // say, max is the first element
    min = nums[0]; // say, min is the first element
    for (int i = 0; i < len; i++)
    {
        if (max < nums[i]) // compare max with each element and update max if necessary
            max = nums[i];

        
        if (min > nums[i]) 
        {
            min = nums[i];
        }
    }
}

// Implements bubble sort
void bubbleSort(int nums[], int len)
{
    int i, j;
    bool sorted = false;
    for (i = 0; i < len; i++)
    {
        sorted = true;
        for (j = 0; j < len - i - 1; j++)
        {
            // if two adjacent numbers are not in order, swap 'em
            if (nums[j] > nums[j + 1])
            {
                
                //  can use built-in swap or implement your own swap
                swap(nums[j], nums[j + 1]);
                sorted = false;
            }
        }
        if (sorted)
            break;
    }
}

big_int findSum(int nums[], int len)
{
    big_int sum = 0;
    
    for (int i = 0; i < len; i++)
    {
        sum += nums[i];
    }
    return sum;
}