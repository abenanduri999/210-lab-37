#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <list>

using namespace std;

int sum_ascii(string); 

int main() {

    map<int, list<string>> hash_table; 
    
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
        int result = sum_ascii(v1[j]); 
        total_max = total_max + result; 
    }

    cout<<endl; 
    cout<<total_max<<endl; //i ended up getting 69893419, success!
    
   
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