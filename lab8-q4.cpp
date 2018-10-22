//2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
#include<iostream>
using namespace std;

int largest(int arr12 [], int n, int k)//fun largest
	{
	     
	     int larger, i;
	     larger = arr12[0];
	     for(i=0; i<k+n; i++)
	        {
	           if (arr12[i] >larger)
	              
	                 larger = arr12[i];
	              
	        }
	     return larger;
	     
	 }
	 
int smallest (int arr12[], int n, int k)
    {
      int smaller, i;
      smaller = arr12[0];
      for (i =0; i<k+n ;i++)
         {
           if(arr12[i] < smaller)
           smaller = arr12[i];
         }
      return smaller;
    }
     
int main ()
     {
       int n, i,k ;
       cout<<"Enter the size of 1st array :";
       cin >> n;
       int arr1[n];
       cout<<"Enter the size of 2nd array :";
       cin>>k;
       int arr2[k];
       int arr12[k+n];
       
          for (i=0; i<n; i++)
             {
               cout << "Enter the elements for 1st array :";
               cin>>arr12[i];
             }
          for (i=0; i<k+n; i++)
             {
               cout<<"Enter the elements for 2nd array :";
               cin>>arr12[n+i-1];
             }
          cout << "The largest numberin both the array is :" <<largest(arr12, n, k)<<endl;
          cout <<"The smallest number in both the array is :" <<smallest(arr12, n, k)<<endl;
       return 0;
     }
     