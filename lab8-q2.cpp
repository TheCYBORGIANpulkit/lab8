//2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
#include<iostream>
using namespace std;

int largest(int arr [])//fun largest
	{
		int arr [10]=45,5,2,6,7,8,4,878,56,43;
		int larger;
		for (int i=0; i<10; i++)//for i=0 i<10 i++
			{
				if (arr[i] > arr[i + 1])//if arr i > arr i+1
					{
						large = arr [i];//large = arr i
						cout << arr[i];
					}
				else large = arr[i +1]; //elase large = arr i+1
			}
		return lagre;//return large
	}

int smallest(int arr [])//fun largest
	{
		int arr [10]=45,5,2,6,7,8,4,878,56,43;
		int smaller;
		for (int i=0; i<10; i++)//for i=0 i<10 i++
			{
				if (arr[i] < arr[i + 1])//if arr i > arr i+1
					{
						smallre = arr [i];//large = arr i
						cout << arr[i];
					}
				else smaller = arr[i +1]; //elase large = arr i+1
			}
		return smaller;//return large
	}

int mean(int arr [])//fun largest
	{
		int arr [10]=45,5,2,6,7,8,4,878,56,43;
		int sum= 0;
		for (int i=0; i<10; i++)//for i=0 i<10 i++
			{	
				sum =  sum + arr [i]; 
			}
		sum = sum/10
		return sum;//return large
	}

int mediam(int arr [])
	{
		int arr[10] = 45,5,2,6,7,8,4,878,56,43;
		for(i=0; i<(10-1); i++)
		{
			for(j=0; j<(10-i-1); j++)
				{
					if(arr[j]>arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			cout << arr [i];
		}
	return 0;
	}
int main ()
	{
		int arr [];
		cout<<largest(arr []);
		cout << smallest(arr []);
		mediam(arr []);
		return 0;
	}	








