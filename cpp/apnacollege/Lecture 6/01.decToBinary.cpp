#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans =0, pow = 1;
    while(decNum>0){
          int rem = decNum % 2;
          decNum /=2;
          
          ans += (rem * pow);
          pow *= 10;
    }
    return ans;
}

int main(){
    int decNum; 
    cout << "Enter a number \t:";
    cin >> decNum;    
    cout << decToBinary(decNum) << endl;

    cout << "-------------" << endl;
    for(int i = 1; i<100; i++){
        cout << "The binary of " << i << " is " << decToBinary(i) << endl; 
    }
    return 0;
}


