/*Name : Dhakshayini Usha R
PRN : @4070123039
ENTC A2
*/
#include <iostream>
using namespace std;

int main(){
    int array[20];
    int num;
    cout<<"Enter the number of elements (1-20) :"<<endl;
    cin>>num;
    
    if (num < 20){
        for(int i = 0; i < num; i++){
            cout<<endl<<"Enter element "<<i<<"\t";
            cin>>array[i];
        }
    }
    else{ 
        cout<<"Not Enough Space!!";
        exit(0);
        }
    
    cout<<"Array :"<<"\t";
    for(int i = 0; i < num; i++){
        cout<<array[i]<<"\t";
    }
    return 0;
}

/*Sample Output: 
Enter the number of elements (1-20) :
4

Enter element 0	3

Enter element 1	4

Enter element 2	6

Enter element 3	7
Array :	3	4	6	7	
*/
