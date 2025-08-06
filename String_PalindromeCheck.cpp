/*Name : Dhakshayini Usha R
ENTC A2
PRN : 24070123039
*/
#include <iostream>
#include <cstring>
using namespace std; 

int main() {
    //Palindrome Check
    string str;
    
    cout<<"Enter a word: "<<"\t";
    cin>>str;
    int flag = 0;
    int len = str.length();
    for(int i = 0; i<len/2; i++){
            if(str[i] != str[len - 1 - i]){
                flag = 1;
                cout<<"Not a palindrome";
                exit(0);
            }
        }
    
    if(flag == 0){
        cout<<"Palindrome";
    }

    return 0;
}

/*
Sample Output: 
Enter a word: 	level
Palindrome
*/
