
#include<iostream>
using namespace std;

int largest(int arr [], int n, int k)//fun largest
	{
	     
	     int larger, i;
	     larger = arr[0];
	     for(i=0; i<=k; i++)
	        {
	           if (arr[i] >larger)
	              
	                 larger = arr[i];
	              
	        }
	     return larger;
	     
	 }
	 
int smallest (int arr[], int n, int k)
    {
      int smaller, i;
      smaller = arr[0];
      for (i =0; i<=k ;i++)
         {
           if(arr[i] < smaller)
           smaller = arr[i];
         }
      return smaller;
    }
     
int main ()
     {
       int n, i,k ;
       cout<<"Enter the size of array :";
       cin >> n;
       int arr[n];
       cout<<"Enter the k'th term :";
       cin>>k;
       if (k<n)
       {
          for (i=0; i<n; i++)
             {
               cout << "Enter the elements :";
               cin>>arr[i];
             }
          cout << "The largest number till k'th position is :" <<largest(arr, n, k)<<endl;
          cout <<"The smallest number till k'th position is :" <<smallest(arr, n, k)<<endl;
       }
       else cout<<"k excudes the size of array";
       return 0;
     }
     