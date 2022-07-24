#include<iostream>
#include<vector>
using namespace std;

int main(){
    //vector<int> * vp =  new vector<int>();

    vector<int> v;

    for(int i=0; i< 100;i++){
        cout<<"Cap : "<<v.capacity()<<endl;
        cout<<"Size : "<<v.size()<<endl;
        v.push_back(i+1);
    }

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;

    //dont use [] for insertint element 
    // it gives garbage value
    v.push_back(23);
    v.push_back(234);

    v.pop_back();

    //Use at() instead of [] 
     cout<<v.at(2)<<endl;
    cout<<v.at(6)<<endl;


     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    /*{
        for(int i=0;i<n;i++)
        {
            nums1.pop_back();
        }
        for(int i=0;i<n;i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        
    }*/

     //cout<<"---"<<endl;

    int num1[5] = {1,4,7,8,9};
    int num2[3] = {2,3, 9};

}
