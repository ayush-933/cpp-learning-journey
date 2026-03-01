#include<iostream>
#include<climits>
using namespace std;

int sti(string s){
    int i = 0;
    int n = s.length();
    int sign = 1;

    // 1️⃣ Skip leading whitespaces
    while(i < n && s[i] == ' '){
        i++;
    }

    // 2️⃣ Check sign
    if(i < n && (s[i] == '+' || s[i] == '-')){
        if(s[i] == '-'){
            sign = -1;
        }
        i++;
    }

    // 3️⃣ Convert digits
    long result = 0;

    while(i < n ){
        result = result * 10 + (s[i] - '0');

        // 4️⃣ Overflow check
        if(sign * result > INT_MAX){
            return INT_MAX;
        }
        if(sign * result < INT_MIN){
            return INT_MIN;
        }

        i++;
    }

    return sign * result;
}

int main(){
    string s = "    -00023";
    int result = sti(s);
    cout << result << endl;
    return 0;
}