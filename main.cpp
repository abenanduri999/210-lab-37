#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <list>

using namespace std;

int gen_hash_index(string); 

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

    int hi = 0; 

    for(int j = 0; j < 100; j++)
    {
      hi =  gen_hash_index(v1[j]); 
      hash_table[hi].push_back(v1[j]);  
    }

    for(auto e: hash_table)
    {
        cout<<"Hash Index: "<<e.first<<" Values: ";
            for(auto val: e.second)
            {
                cout<<val<<" ";
            }

        cout<<endl; 
    }
   
    
   
    return 0;
}


int gen_hash_index(string s)
{
    int total = 0; 
    for(int i = 0; i < s.length(); i++)
    {
        total = total + (int)s[i]; 
    }

    int mod = total % 97; 

    return mod; 
}