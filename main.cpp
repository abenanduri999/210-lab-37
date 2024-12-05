#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int sum_ascii(string); 

int main() {

    vector<string> v1; 
    ifstream input("data.txt"); 
    string data; 
    while(getline(input, data))
    {
        v1.push_back(data); 
    }
    input.close(); 

    int total_max = 0; 

    int result = 0; 

    for(int j = 0; j < v1.size(); j++)
    {
        
    }

    
   
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