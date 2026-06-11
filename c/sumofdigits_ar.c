#include <iostream>
using namespace std;

    int main () {
        int n = 10829;
        int digSum = 0;

        while (n > 0) {
            int lastdig = n % 10;
            digSum += lastdig;
            n = n /10;
        }
        cout <<"sum = " << digSum << endl;
        
        return0;

    }