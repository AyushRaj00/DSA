#include<iostream>
using namespace std;

int main(){

    char a[10] = {'a','b','c','d','e','\0'};

    cout<<a<<endl;

    char s[10];
    //cin>>s;
    //cout<<s;

    char s1[] = {'h','e','l','l','o'};
    char s2[] = "HELLO";

    cout<<s1<<" "<<sizeof(s1)<<endl;
    cout<<s2<<" "<<sizeof(s2)<<endl;





    return 0;
}