#include <iostream>

using namespace std;

int sum_ascii(string); 

int main() {
    
    cout<<endl;
    cout<<sum_ascii("536B9DFC93AF")<<endl; 
    cout<<sum_ascii("1DA9D64D02A0")<<endl; 
    cout<<sum_ascii("666D109AA22E")<<endl; 
    cout<<sum_ascii("E1D2665B21EA")<<endl;
   /* char a = 'A';
    cout << a << endl;
    cout << (int) a << endl;
    int b = 66;
    cout << b << endl;  
    cout << (char) b << endl;*/
    return 0;
}
/*
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/

int sum_ascii(string s)
{
    int total = 0; 
    for(int i = 0; i < s.length(); i++)
    {
        total = total + (int)s[i]; 
    }

    return total; 
}