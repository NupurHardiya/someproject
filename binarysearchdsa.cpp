#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void binarysearch(vector<int>&arr,int n){
    sort(arr.begin(),arr.end());
    int ans = -1;
    int l=0,h=arr.size()-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(arr[mid] == n)
        {
        ans=1;
        cout<<"element found"<<endl;
        break;
        }
        else if(arr[mid]<n){
            l=mid+1;}
        else{
            l=mid-1;
            }
        l++;
    }
    if(ans == -1)
    {
        cout<<"element not found"<<endl;
    }
}
int main(){
    vector<int>vec={12,25,3,465,8,47};
    binarysearch(vec,3);
    return 0;
}
