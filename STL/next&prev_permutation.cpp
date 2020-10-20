#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    int n;
    cout<<"Find the permutation of how many numbers: ";
    cin>>n;
    cout<<"Now enter your numbers: ";
    for(int i=0;i<n;i++)
    {
        int values;
        cin>>values;
        arr.push_back(values);
    }
    sort(arr.begin(),arr.end());
    cout<<"The "<<n<<"! possible permutations with "<<n<<" elements with next permutations :"<<endl;
        do
        {
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }while(next_permutation(arr.begin(),arr.end()));

    reverse(arr.begin(),arr.end());
    cout<<"The "<<n<<"! possible permutations with "<<n<<" elements with previous permutations :"<<endl;
        do
        {
            for(int i=0; i<n; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }while(prev_permutation(arr.begin(),arr.end()));

}
