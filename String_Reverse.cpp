/*Name : Dhakshayini Usha R
ENTC A2
PRN : 24070123039
*/
#include <iostream>
#include <cstring>
using namespace std; 

int main() {
    //String Reversal
    string str;
    
    cout<<"Enter a word: "<<"\t";
    cin>>str;
    
    int len = str.length();
    cout<<"Reversed word :";
    for(int i = len - 1; i >= 0 ; i--){
        cout<<str[i];
    }
    

    return 0;
}

/*
Sample Output: 
Enter a word: 	Sunday
Reversed word :yadnuS
*/
