#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int sum_ascii(string); 

int main() {

    vector<string> v1; 
    ifstream input("data.txt"); 

    
   
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