#include<iostream>
using namespace std;
int main()
{
    string s;
    int cnt=0;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++){
        cnt++;
    }

    int i=0,e=cnt-1;
    while(i<e){
        swap(s[i++],s[e--]);
    }
    cout<<s;
    return 0;
}