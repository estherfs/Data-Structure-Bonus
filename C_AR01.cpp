#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string temp;
    while(getline(cin, temp)){
        stringstream ss;
        ss << temp; //把字串temp餵進ss裡,ss會切空格
        int arr[101];
        int count = 0; //計算陣列讀入幾個值
        while(ss >> arr[count++]){
        
        }

        count--;
        while(count>0){
            cout << arr[--count] << " ";
        }
        cout << endl;
    }


    return 0;
}