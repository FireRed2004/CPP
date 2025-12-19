#include <iostream>

using namespace std;

int main(){

    double distance;
    double lightspeed;
    double delay;
    double delay_in_min;

    distance = 34000000.0;
    lightspeed = 186000.0;

    delay = distance / lightspeed;
    delay_in_min = delay / 60;

    cout << "Time delay when talking to Mars: " << delay << " seconds." << endl;
    cout << "In minutes: " <<  delay_in_min << endl; 

    return 0;
}
