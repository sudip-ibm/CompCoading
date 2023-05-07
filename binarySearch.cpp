//Programming to search an element in an sorted array by using binary search Algorithm.
// Code by- Sudip Roy

/*
    EXPLAINATION: 
        Till now we have been using linear search for searching an element in an array. But the time complexity of that code is O(n). So, in this solution we will be using binary search.

        Note: Binary search is used in sorted array by repeatedly dividing the search interval into half.

        Steps:
            Suppose we need to find the element x in an sorted array. Then,
            1. Find the middle element and compare with x.
            2. if x and the middle element is same then return the index of middle element
            3. else if x is greater then middle element, then x is on the right half (array is sorted)
            4. else we will conside the right half
*/

#include<bits/stdc++.h>
using namespace std;

void findElement(int arr[], int n, int x)
{
    
}

int main()
{
    int n; //size of the array
    cin>>n;
    int x; //the element to find
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>x;
    findElement(arr,n,x);

}