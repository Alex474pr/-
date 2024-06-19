#include <iostream>
using namespace std;

int main() {
    
    int n, k;
    cout << "Wedit kilkist misyatsiv: ";
    cin >> n;
    cout << "Wedit kilkist krolikiv kotrix zyidae monstr: ";
    cin >> k;

    int beginr = 1; 
    int currentr = beginr; 

    for (int i = 1; i <= n; ++i) {
        int newr = currentr;
        if (currentr > k) {
            newr -= k;
            currentr -= k;
        }
        beginr = currentr;
        currentr += newr;
    }
    cout << "ostanniy misyats: " << currentr << " krolikiv" << endl;

    return 0;
}