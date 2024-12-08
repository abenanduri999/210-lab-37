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

    int choice; 
    do
    {
        cout<<"1) Print the first 100 entries\n"; 
        cout<<"2) Search for a key\n"; 
        cout<<"3) Add a key\n"; 
        cout<<"4) Remove a key\n"; 
        cout<<"5) Modify a key\n"; 
        cout<<"6) Exit\n"; 
        cin>>choice; 

        string entry; 

        switch(choice)
        {
            case 1: 
                cout<<"First 100 values are: \n";
                for(auto e: hash_table)
                {
                    cout<<"Hash Index: "<<e.first<<" Values: ";
                    for(auto val: e.second)
                    {
                        cout<<val<<" ";
                    }

                    cout<<endl; 
                }
                break; 

            case 2: 
                cout<<"Enter key to search\n"; 
                break; 

            case 3: 
                cout<<"Type key to add: \n"; 
                break; 

            case 4: 
                cout<<"Type key to remove: \n";
                break;
            
            case 5: 
                cout<<"Type in key to modify: \n"; 
                break; 
            
            case 6: 
                cout<<"Goodbye!\n";  
                break; 
        }
        



    }while(choice != 6); 

    
   
    
   
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