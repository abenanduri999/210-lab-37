#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int sum_ascii(string); 

int main() {

    
    
   
    return 0;
}


int sum_ascii(string s)
{
    int total = 0; 
    for(int i = 0; i < s.length(); i++)
    {
        total = total + (int)s[i]; 
    }

    return total; 
}