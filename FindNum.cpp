/*Name : Dhakshayini Usha R
PRN : @4070123039
ENTC A2
*/
#include <iostream>
using namespace std;

int main(){
    int array[15] = {2,44,55,66,3,5,22,18,49,56,8,9,10,11,13};
    int num;
    cout<<"Enter the number you want to search :";
    cin>>num;
    
    for(int i = 0; i < num ; i++){
        if(num == array[i]){
            cout<<"The searched number's index is "<<i<<endl;
            exit(0);
        }
    }
    cout<<"Oops, Didn't find the number!!";
    
    return 0;
}

/*Sample Output: 
Enter the number you want to search :55
The searched number's index is 2

Enter the number you want to search :45
Oops, Didn't find the number!!
*/
