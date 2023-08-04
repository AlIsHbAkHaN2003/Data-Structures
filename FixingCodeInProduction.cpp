//Fixing code in production

#include <iostream>
using namespace std;

int FixingCodeInProduction(int a[],int size, int number){
    int initial = 0;
    int final = size-1;
    while (initial<final){
        
        //find the index of mid value
        int mid = (final +initial) / 2;

        //check if the mid value is greater than number then set the index of initial value mid.
        if (a[mid]>number){
            final = mid;
        }

        //check if the mid value is less than number then set the index of initial value mid.
        else if (a[mid] < number){
            initial = mid;
        }

        //if mid value is equal to the required value then return index
        else{
            if (a[mid] == number){
                return mid;
            }
        }
    }

    //If the value is not present then return -1
    return -1;
}
int main(){
    int size = 9;
    int a[] = {2, 4, 8, 16, 32, 64, 128, 256, 512};
    int number = 0;

    //call function and store result
    int result = FixingCodeInProduction(a,size,number);

    //if result is -1 print element is not present 
    if (result == -1){
        cout<<"Element is not present";
    }
    //else print the index of the value
    else{
        cout<<"Element is present at index : "<<result;
    }    
}