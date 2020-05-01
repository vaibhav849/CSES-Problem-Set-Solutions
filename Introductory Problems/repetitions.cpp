#include<bits/stdc++.h>
using namespace std;

int main(){
    int temp = 0, max = 0;
    string s;
    cin>>s;
    temp = 1;
    for(int i = 1; i < s.length(); i++){
        if(s[i] == s[i - 1]){
            temp++;
        }else{
            if(temp > max){
                max = temp;
            }
            temp = 1;
        }
    }
    if(temp > max){
        max = temp;
    }
    cout<<max<<endl;
    return 0;
}
