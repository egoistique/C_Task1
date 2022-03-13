#include <iostream>
#include <math.h>

double nextPart(int n, double cur);

using namespace std;
int main() {
    int n;
    double sumN =  1; //сумма равна 1 тк элемент при н = 0 равен 1
    double e = 0.0000001;
    cout << "Enter n: \n";
    cin >> n;

    double prev =  0;
    double cur = - 1;
    for (int i = 1; i < n && abs(cur) > e; i++){
        sumN += cur;
        prev = cur;
        cur = nextPart(i + 1, prev);
        cout << sumN << "\n";
    }
    cout << "Answer: " << sumN;
    cout << "\n Absolut answer: " << 1 / exp(1);
}

double nextPart(int n, double preX) {
    return (preX * (-1)) / n;
}
