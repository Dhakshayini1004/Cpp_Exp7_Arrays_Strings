/*Name : Dhakshayini Usha R
ENTC A2
PRN : 24070123039
*/
#include <iostream>
#include <cstring>
using namespace std; 

int main() {
    //Hardcoded string definition
    char str1[15] = "Dhakshayini";
    char str2[7] = {'h','e','l','l','o','\0'};
    char str3[] = {'h','e','l','l','o','\0'};
    string str4 = "Dhakshayini";
    
    cout<<str1<<endl<<str2<<endl<<str3<<endl<<str4<<endl;
    
    // User-input
    /*Cannot make a string without mentoning size, if number of characters is more than mentioned size, buffer overflow occurs*/
    cout<<"Enter 3 strings"<<endl;
    char str5[15],str6[10];
    string str7;
    cin>>str5>>str6>>str7;
    cout<<str5<<endl<<str6<<endl<<str7;
    return 0;
}

/*Sample Output: 
Dhakshayini
hello
hello
Dhakshayini
Enter 3 strings
word
word
word
word
word
word
*/
