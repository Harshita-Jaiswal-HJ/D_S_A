//coding ninjas
# include <bits/stdc++.h>
using namespace std;
int findUnique(int *arr, int size)
{
    //Write your code here
    int ans=0;
    for(int i=0; i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,2,3,2,1};
    cout<<findUnique(arr,5);
    return 0;
}