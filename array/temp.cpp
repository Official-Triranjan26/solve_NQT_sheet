#include<bits/stdc++.h>
using namespace std;
int longestAlternatingSubarray(vector<int> nums, int threshold) {
        int l=0,r1=0,r2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                l=i;
                break;
            }
        }
        cout<<"l : "<<l<<endl;
        for(int i=0;i<nums.size()-1;i++){
            cout<<"element "<<nums[i]<<endl;
            cout<<"i : "<<i<<endl;
            cout<<"r: "<<r1<<endl;
            if((nums[i] % 2 ) != nums[i + 1] % 2){
                cout<<"if"<<endl;
                continue;
            }
            else{
                cout<<"else"<<endl;
                r1=i;
                break;
            }
        }
        if(r1==0){
            r1=nums.size()-1;
        }
        cout<<"r1: "<<r1<<endl;

        cout<<"loop2---------"<<endl;
        for(int i=0;i<nums.size();i++){
            cout<<"element "<<nums[i]<<endl;
            cout<<"r: "<<r2<<endl;
            cout<<"i : "<<i<<endl;
            if( nums[i] <= threshold){
                cout<<"if"<<endl;
                continue;
            }
            else{
                cout<<"else"<<endl;
                r2=i-1;
                break;
            }
        }
        if (r2==0){
            r2=nums.size();
        }
        cout<<"r2: "<<r2<<endl;
        int ans=min(r1,r2);
        cout<<"ans : "<<ans<<endl;
        return (ans+1-l);
    }

int main(){
    vector<int> nums{3,2,5,4};
    int  threshold = 5;
    cout<<longestAlternatingSubarray(nums,threshold)<<endl;
    return 0;
}