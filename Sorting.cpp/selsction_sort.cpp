#include <iostream>
using namespace std;

int  seclection_sort(int arr[], int n){

    for(int i = 0 ; i < n ; i ++){
        int min = i;
        for(int j = i+ 1; j < n ; j++){
            if(arr[j] < arr[min] ){
                min = j;
            }
        }
      int temp = arr[min];
      arr[min ] = arr[i];
      arr[i] = temp;  
    }


}

int main() {
int n;
cin >> n;
int arr[n];

for(int i = 0 ; i < n; i ++){
cin >> arr[i] ;
}

seclection_sort(arr, n);

for(int i = 0 ; i < n ;i ++){
cout << arr[i] << " ";
}
return 0;
}