#include<bits/stdc++.h>
using namespace std;

char repeatedcharacter(string s){
    int element[256]={0};
    for(int i=0;i<s.length();i++){
        element[s[i]]++;
        if(element[s[i]]==2){
            return s[i];
        }
    }
    return -1;
}
int main(){
    string input;
    cout<<"enter a string:";
    cin>>input;
    char repeated=repeatedcharacter(input);
    if (repeated != 0) {
        cout << "The first repeated character is: " << repeated << endl;
    } else {
        cout << "No repeated character found." << endl;
    }
    return 0;
}

class Solution {
public:
    char repeatedCharacter(string s) {
        int element[256]={0};
        for(int i=0;i<s.length();i++){
            element[s[i]]++;
            if(element[s[i]]==2){
                return s[i];
            }
        }
        return -1;
        
    }
};
