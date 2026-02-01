#include <iostream>
using namespace std;

int binaryToDec(int decNum){
    int rem, pow = 1;
    int ans = 0;
    while(decNum>0){
        rem = decNum%10;
        decNum = decNum/10;
        ans +=(rem*pow);
        pow = pow*2;
    }

    return ans;
}

int main(){
    int decNum;
    cout << "Enter a number\t: ";
    cin >> decNum;
    cout << binaryToDec(decNum);

    return 0;
}


