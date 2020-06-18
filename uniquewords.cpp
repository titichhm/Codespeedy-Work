#include<bits/stdc++.h> 
using namespace std; 
  
void printUniquedWords(char filename[]) 
{ 
    // Open a file stream 
    fstream fs(filename); 
  
    // Create a map to store count of all words 
    map<string, int> mp; 
  
    // Keep reading words while there are words to read 
    string word; 
    while (fs >> word) 
    { 
        // If this is first occurrence of word 
        if (!mp.count(word)) 
            mp.insert(make_pair(word, 1)); 
        else
            mp[word]++; 
    } 
  
    fs.close(); 
  
    // Traverse map and print all words whose count 
    //is 1 
    for (map<string, int> :: iterator p = mp.begin(); 
         p != mp.end(); p++) 
    { 
        if (p->second == 1) 
            cout << p->first << endl; 
    } 
} 
  
int main() 
{ 
    // Create a file for testing and write something in it 
    char text[] = "test.txt"; 
    ofstream fs(text, ios::trunc); 
    fs << "geeks for geeks quiz code geeks practice for qa"; 
    fs.close(); 
  
    printUniquedWords(text); 
    return 0; 
}
