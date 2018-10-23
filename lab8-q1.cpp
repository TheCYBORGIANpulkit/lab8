//1. Write a program to find sum of all elements of an array. (Use functions)

#include<iostream>
using namespace std;

int sum1(int arr[])// make fun1 arr, a
	{
		for (int i = 0; i < 10; i++)// for i=o  i<a i++
			{
				arr[i] = i ; // arr i = i+1
			}
		return 0;
	}
int sum2(int arr [])// make fun2 arr , a  
	{
		for (int i = 0; i < 10; i++)// for i = o i<n i++
			{
				cout << arr [i];// cout arr i
			}
		return 0;
	}
int sum3 (int arr [])// fun 3 arr, a
	{
		int sum = 0;
		for (int i = 0; i < 10; i++)// int sum = sum + arr i
			{
				sum = sum + arr[i];
			}
		return sum; 
	}
int main()// int main 
	{
		int arr [10];
		sum1(arr);// fun1
		sum2(arr);// fun2
		cout<< endl; 
		cout<< sum3(arr)<<endl;// fun3

