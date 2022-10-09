#include<iostream>
using namespace std;
int main(){
    int arr[7];
    for(int i=0; i<6; i++){
        cin >> arr[i];
    }
    for (int i = 5; i >= 0; i--){
        cout << arr[i] << " ";
    }
    
    return 0;
}