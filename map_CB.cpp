#include<iostream>
#include <map>
#include<unordered_map>
using namespace std;



int main(){

    //MAP...........

    map<string ,int> m;


    // there are many ways to store map 
    //1st is
    m.insert(make_pair("Mango",100));

    //2nd way
    pair<string,int> p;
    p.first = "Apple";
    p.second = 120;

    m.insert(p);

    // 3rd way

    m["Banana"] = 20;

    // SEARCH

    string fruit;
    cin>>fruit;
     auto it= m.find(fruit);
     if(it!=m.end()){
        cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
     }
     else{
        cout<<"Fruit is not present"<<endl;
     }

     //Erase
     m.erase(fruit);

     //another way to find a particular map
     // it stores unique keys only once
     if(m.count(fruit)){
        cout<<"Price is "<<m[fruit]<<endl;
     }else{
        cout<<"Couldn't find"<<endl;

     }


}