#include <iostream>
#include <cmath>
using namespace std;

int main(){

    double principal;
    double intRate;
    double payPerYear;
    double numYears;
    double payment;
    double numer, denom;
    double b, e;

    cout << "Enter principal: ";
    cin >> principal;

    cout << "Enter intrest rate: ";
    cin >> intRate;

    cout << "Enter number of payments per year: ";
    cin >> payPerYear;

    cout << "Enter number of years: ";
    cin >> numYears;

    numer = intRate * principal / payPerYear; 

    e = -(payPerYear * numYears);
    b = (intRate / payPerYear) + 1;
    denom = 1 - pow(b , e);
    payment = numer / denom;

    cout << "Payment is: " << payment;

    return 0;
}
