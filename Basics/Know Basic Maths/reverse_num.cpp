#include <bits/stdc++.h>

using namespace std;

int digit_printer(int num, int counter){
    if (num >0){
        counter ++;
        // cout < num%10 << endl;
        digit_printer(num/10, counter);
    }else{
        return counter;
    }
}


int num_trimmer(int num){
    if (num%10 == 0){
        num_trimmer(num/10);
    }else{
        return num;
    }
}

int reverse(int num, int dig_count){
    int newnum = 0;
    for(int i = dig_count; i--; i>=0){
        newnum += (num%10)*pow(10, i);
        num = num/10;
    }
    return newnum;
}

int main(){
    int num;
    cout << "Enter num:\t";
    cin >> num;
    num = num_trimmer(num);
    cout << "new_num : " <<  num << endl << digit_printer(num, 0)<< endl;
    cout << reverse(num, digit_printer(num, 0));

    return 0;
}