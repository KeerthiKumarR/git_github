// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         int i=1;
//         while(i<=row){
//             cout<<no<<"  ";
//             no=no+1;
//             i=i+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int i,j;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             cout<<"*"<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// bool search(int arr[], int idx,int n, int target){
//     if(n==0){
//         return false;
//     }
//     if(arr[idx]==target){
//         return true;
//     }
//     return search(arr,idx+1,n-1,target);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     if(search(arr,0,n,target)){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m; 
//     cin>>n>>m;
//     vector<long long>arr(1+n);
//     for(int i=1;i<=n;++i){
//         cin>>arr[i];
//     }
//     vector<int>power(m);
//     for(int i=0;i<m;++i){
//         cin>>power[i];
//     }
//     sort(power.begin(),power.end());
//     for(int i=1;i<=n;++i){
//         arr[i] += arr[i - 1];
//     }
//     long long ans=0;
//     for(int i=0;i<m/2;++i){
//         int l=power[i];
//         int r=power[m-1-i];
//         ans +=(arr[r]-arr[l-1]);
//     }
//     cout<<ans+(m/2)<<"\n";  
//     return 0; 
// }


// #include <iostream>
// using namespace std;
// void coin(string str,int n){
//     if(n==0){
//         cout<<str<<endl;
//         return;
//     }
//     coin(str+"H",n-1);
//     coin(str+"T",n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     coin(" ",n);
//     return 0;
// }

// subsequence using recursion
// #include <iostream>
// using namespace std;
// void sub(string str,int idx,string ans){
//     if(idx==str.size()){
//         cout<<ans<<endl;
//         return;
//     }
//     sub(str,idx+1,ans);
//     sub(str,idx+1,ans+str[idx]);
// }
// int main(){
//     string str;
//     cin>>str; 
//     sub(str,0," ");
//     return 0;
// }

//convert a given string into an interger using recurision
// #include <iostream>
// using namespace std;
// void convert(int n,string s){
//     int ans=0;
//     if(n==0){
//         return;
//     }
//     convert(n-1,s);
//     ans=ans*10+(s[n]-'0');
//     cout<<ans<<endl;
// }
// int main(){
//     string s;
//     cin>>s;
//     int n=s.length();
//     convert(n,s);
//     return 0;
// }


// coin change
// #include <iostream>
// using namespace std;
// void exchange(int arr[],string ans,int target,int idx,int n){
//     if(target==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=idx;i<n;i++){
//         if(target>=arr[i]){
//             exchange(arr,ans+to_string(arr[i])+" ",target - arr[i],i,n);  
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     exchange(arr," ",target,0,n);
//     return 0;
// }


// #include <iostream>
// using namespace std;
// void maze(string str,int sr,int sc,int dr,int dc){
//     if(sr==dr && sc==dc){
//         cout<<str<<endl;
//         return;
//     }
//     if(sr<dr){
//         maze(str+"H",sr+1,sc,dr,dc);
//     }
//     if(sc<dc){
//         maze(str+"V",sr,sc+1,dr,dc);
//     }
// }
// int main(){
//     maze(" ",0,0,2,2);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int n=sizeof(arr)/sizeof(arr[0]); 
//     int k=3;
//     int ans[10];
//     int i=0;
//     while(i<n){
//         int idx=i+k-1;
//         int cnt=0;

//         if(idx>=n){
//             idx=n-1;
//         }

//         while(i<n && cnt<k){
//             ans[i] = arr[idx];
//             i++;
//             idx--;
//             cnt++;
//         }
//     }
//     for(int j=0;j<n;j++){
//         cout<<ans[j]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

//first occurence
// #include <iostream>
// using namespace std;
// int find(int arr[],int n,int i,int target){
//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==target){
//         return i;
//     }
//     int res=find(arr,n,i+1,target);
//     return res;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int result=find(arr,n,0,target);
//     cout<<result<<endl;
//     return 0;
// }

//last occurence
// #include <iostream>
// using namespace std;
// int find(int arr[],int n,int i,int target){
//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==target){
        
//         return i;
//     }
//     int res=find(arr,n,i-1,target);
//     return res;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;
//     int result = find(arr,n,n-1,target);
//     cout << result << endl;
//     return 0;
// }



// binary search using recursion
#include <iostream>
using namespace std;
bool binarys(int arr[],int start,int end,int target){
    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==target){
        cout<<mid<<endl;
        return true;
    }
    if(arr[mid]>target){
        return binarys(arr,start,mid-1,target);
    }
    if(arr[mid]<target){
        return binarys(arr,mid+1,end,target);
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    binarys(arr,0,n-1,target);
    return 0;
}