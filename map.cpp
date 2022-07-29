#include<iostream>
#include <map>
#include<unordered_map>
using namespace std;



int main(){

    //MAP...........

    map<int,int> m;

    cout<<m.size()<<endl;
    m.insert(make_pair(20,1));
    m.insert(make_pair(10,1));
    cout<<m.size()<<endl;
    m[10]++;
    auto it = m.find(10);
    //(10,2)
    cout<<(it != m.end() ? it->second : 0)<<endl;
    auto it2 =m.find(20);
    //(20,1)
    cout<<(it2 !=m.end() ? it2-> first:0)<<endl;
    cout<<m.size()<<endl;



    //UNORDERED_MAP.........

    unordered_map<int ,int> m1;
    m1.insert(make_pair(40,0));
    m1.insert(make_pair(50,1));
    cout<<m1.size()<<endl;
    m[100]++;
    auto un = m1.find(40);
    cout<<(un != m1.end() ? un->first:0)<<endl;
    auto un1 = m1.find(50);
    //(50,2)
    cout<<( un != m1.end() ? un1->second:0)<<endl;
    cout<<m1.size();


}

