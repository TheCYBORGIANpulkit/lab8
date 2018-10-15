//2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
#include<iostream>
using namespace std;

int largest(int arr [], int n)//fun largest
	{
	     
	     int larger, i;
	     larger = arr[0];
	     for(i=0; i<n; i++)
	        {
	           if (arr[i] >larger)
	              
	                 larger = arr[i];
	              
	        }
	     return larger;
	     
	 }
	 
int smallest (int arr[], int n)
    {
      int smaller, i;
      smaller = arr[0];
      for (i =0; i<n; i++)
         {
           if(arr[i] < smaller)
           smaller = arr[i];
         }
      return smaller;
    }

int mean (int arr[], int n)
    {
      int sum = 0, i;
      for (i=0; i< n; i++)
        {
          sum = sum + arr[i];
        }
        sum = sum/n;
        return sum;
    }
    
int median(int arr[], int n)
    {
      int i, j, ini=0, nex=0;
      float x;
      for (j=0; j<n; j++)
         {
           for (i=0; i<n-1; i++)
             {
               if (arr[i] > arr [i+1])
                 {
                   ini = arr[i+1];
                   nex = arr[i];
                   arr[i] = ini;
                   arr[i+1] = nex;
                 }
             }
         }
       if (n%2==0)
        x= (arr[(n-1)/2] + arr[(n+1)/2])/2;
       else  x = (arr[(n-1)/2]);
       cout<<x<<endl;
    }
    
int frequency(int arr[], int n)
    {
      
      for(int j=0; j<n; j++)
         {
           int frq =0 ;
           for (int i=0; i<n; i++)
              {
                if(arr[j] == arr[i])
                frq = frq + 1;
              }
           cout<<"The frequency of "<<j<<"th element is "<<frq<<endl;
         }
    }
  
          
	 
int main ()
     {
       int n, i;
       cout<<"Enter the size of array :";
       cin >> n;
       int arr[n];
       for (i=0; i<n; i++)
          {
            cout << "Enter tlhe elements :";
            cin>>arr[i];
          }
       cout << "The largest number is :" <<largest(arr, n)<<endl;
       cout <<"The smallest number is :" <<smallest(arr, n)<<endl;
       cout << "The mean of these are: "<<mean(arr, n) <<endl;
       cout<<"The median of the series are :";
       median(arr, n);
       cout<< frequency(arr, n);
       
       return 0;
     }
     