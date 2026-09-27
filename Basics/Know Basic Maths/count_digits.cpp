#include <bits/stdc++.h>

using namespace std;

void digit_printer(int num, int counter){
    if (num >0){
        counter ++;
        // cout < num%10 << endl;
        digit_printer(num/10, counter);
    }else{
        cout << counter;
    }
}


int main(){
    int num;
    cout << "Enter num:\t";
    cin >> num;
    digit_printer(num, 0);
    return 0;
}