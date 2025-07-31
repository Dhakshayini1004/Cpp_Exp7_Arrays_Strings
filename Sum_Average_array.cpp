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
        
    int sum = 0;
    cout<<"Array :"<<"\t";
    for(int i = 0; i < num; i++){
        cout<<array[i]<<"\t";
        sum = sum + array[i];
    }
    
    cout<<"Sum : "<<sum<<endl;
    cout<<"Average : "<<sum/num<<endl;
    
    return 0;
}

/*Sample Output : 
Enter the number of elements (1-20) :
7

Enter element 0	7

Enter element 1	14

Enter element 2	21

Enter element 3	28

Enter element 4	35

Enter element 5	42

Enter element 6	49
Array :	7	14	21	28	35	42	49	Sum : 196
Average : 28
*/








