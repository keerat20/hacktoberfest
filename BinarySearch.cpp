#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){
    int start , mid , end;
    start = 0;
    end = size - 1;
    mid = (start + end) / 2;

    while (start <= end){
        if (key == arr[mid]){
            return mid;
        }

        if (key > arr[mid]){
            start = mid + 1 ;
        }

        else{
            end = mid - 1;
        }
        mid = (start + end ) / 2; 
    }
    return -1;
}

int main(){
    int even[6]={1, 2, 4, 6, 8, 10};
    int odd[5]={1, 2, 5, 8, 11};

    int evenIndex = binarySearch(even , 6 , 10);
    cout << "Index of 10 is " << evenIndex << endl;

    return 0;
}