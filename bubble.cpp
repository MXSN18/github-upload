#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, temp;
    int size = 10;
    int arr[10];
    for(int i = 0; i < size; i++) arr[i] = rand();
    cout << "Der ursprüngliche Array ist: \n";
    for(temp = 0; temp < size; temp++) cout << arr[temp] << ' ';

    for (a = 0; a < size; a++){
        for (b = size-1; b >= a; b--){
            if(arr[b] > arr[b+1]){
                temp = arr[b+1];
                arr[b+1] = arr[b];
                arr[b] = temp;
            }   
        }
    }
    cout << "\nHier der sortierte Array: \n";
    for(temp = 0; temp < size; temp++) cout << arr[temp] << ' ';
    return 0;



}