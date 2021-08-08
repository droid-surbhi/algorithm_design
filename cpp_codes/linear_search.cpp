/* Given an integer and an array of integers, write a function named linear_search that returns the number of comparisons performed doing a linear search. The function should take 3 arguments: 

    The number searched for
    The array of integers
    The number of elements in the array

If the number searched for is not in the array then the function should return the maximum number of searches to determine the element is not in the array.

Here is an example call to the function

int lst[] = {19, 2, 20, 1, 0, 18};

printf(“%i”,linear_search(20, lst, 6));

The above code would print 3. */

#include <iostream>
using namespace std;
int linear_search(int findNum, int *list, int numElems);

int main(){
    int arraySize, findNum, count;
    int *list = new int [arraySize];
    cout<<"Please enter the number of elements in the input array: ";
    cin>>arraySize;
    cout<<"Please enter the array elements, separated by a space: ";
    for (int i=0; i<arraySize;i++){
        cin>>list[i];
    }
    cout<<"Please enter the number to be searched for in the given array: ";
    cin>>findNum;

    count = linear_search(findNum, list, arraySize);
    cout<<"Required "<<count<<" steps for linear search.";
    return 0;
}

int linear_search(int findNum, int *list, int numElems){
    for (int i = 0; i<numElems; i++){
        if (list[i] == findNum){
            return i+1;
        }
    }
    return numElems;
}