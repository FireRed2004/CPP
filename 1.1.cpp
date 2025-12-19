#include <iostream>
using namespace std;

int main(){
    double f;
    double m;

    cout << "Enter a number of feet you would like to convert to metres: " << endl;
    cin >> f ;

    m = f / 3.28;
    cout << f << " feet is " << m << " in metres " << endl; 
    

    return 0;
}
