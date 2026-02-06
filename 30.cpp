#include <iostream>
using namespace std;

bool freq(int arr[], int n) {
    int freqArr[100];
    int k = 0;   // number of unique elements counted

    for(int i = 0; i < n; i++) {
        int count = 0;
        bool alreadyCounted = false;

        // check if this element was already processed
        for(int x = 0; x < i; x++) {
            if(arr[i] == arr[x]) {
                alreadyCounted = true;
                break;
            }
        }

        if(alreadyCounted)
            continue;

        // count frequency
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        freqArr[k++] = count;
    }
    for(int i=0;i<k;i++){
        cout<<freqArr[i]<<" ";
    }
    cout<<endl;

    // check if frequencies are unique
    for(int i = 0; i < k; i++) {
        for(int j = i + 1; j < k; j++) {
            if(freqArr[i] == freqArr[j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int arr[] = {1,1,2,3,3,3,3,4,4,4,5,5,5,5,5};
    cout << freq(arr, 15) << endl;
    return 0;
}
