/* Name : Dhakshayini Usha R
   PRN  : 24070123039
   ENTC A2
*/
#include <iostream>
using namespace std;

int main() {
    int array[15] = {2, 44, 55, 66, 3, 5, 22, 18, 49, 56, 8, 9, 0, 11, 13};
    int num;
    
    cout << "Enter 1 for Maximum number, 0 for Minimum number: ";
    cin >> num;

    switch(num) {
        case 0: {
            int min = array[0];
            for(int i = 1; i < 15; i++) {
                if(array[i] < min) {
                    min = array[i];
                }
            }
            cout << "Minimum: " << min << endl;
            break;
        }
        case 1: {
            int max = array[0];
            for(int i = 1; i < 15; i++) {
                if(array[i] > max) {
                    max = array[i];
                }
            }
            cout << "Maximum: " << max << endl;
            break;
        }
        default:
            cout << "Invalid Input!" << endl;
    }

    return 0;
}

/*Sample Output: 
Enter 1 for Maximum number, 0 for Minimum number: 1
Maximum: 66

Enter 1 for Maximum number, 0 for Minimum number: 0
Minimum: 0
*/




