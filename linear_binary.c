#include<stdio.h>

int linearSearch(int arr[], int size , int element){
for (int i = 0; i < size; i++)
{
    if (arr[i]==element)
    {
        return i;
    }
    
}
return -1;
}

int binarySearch(int arr[],int size, int element){
    int low,mid,high;
     low = 0;
    
    high = arr[size -1];
   
   while (low<=high)
   {
    mid = (low+high)/2;
    if (arr[mid] == element)
    {
        return mid;
    }if (arr[mid]<element)
    {
        high = mid -1;
    }else{
        low = mid-1;
    }
   }
    return -1;
}

int main(){
    int arr[] = {1,2,34,5,6,77,54,12};
    int arr2[] = {1,2,3,4,5,6,7,8};
    int element = 54;
    int element2 = 8;
    int size = sizeof(arr)/sizeof(int);
    int size2 = sizeof(arr2)/sizeof(int);
    int resultData = linearSearch(arr,size,element);
    int resultData2 =binarySearch(arr2,size2,8);
    printf("the data %d is in index  %d",element2,resultData);
    printf("the data %d is in index  %d",element,resultData2);
    return 0;
    }