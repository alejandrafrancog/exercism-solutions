#include "binary_search.h"
const int *binary_search(int value, const int *arr, size_t length){
    int low = 0,high = length-1,mid;
    while(low <= high ){
        mid = low + (high -low)/2;
        if( *(arr+mid) == value){
            return &arr[mid];
        }
        else {
            if ( value > *(arr+mid)){
                low = mid+1;
            }else if  ( value < *(arr+mid) ){
                high = mid-1;
            }
        }
    }
    return NULL;    
}
