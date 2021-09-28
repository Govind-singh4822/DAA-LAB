#include<iostream>
using namespace std;

void solve(char arr[],int n)
{
    int freq[26] = {0};
    //int mx = -1;
    char result;
    int flag=0;

    for(int i=0;i<n;i++)
    {
        freq[arr[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        int mx=0;
            mx = freq[i];
            result = (char)(i+'a');
        

        if(mx>1)
        {
            flag=1;
            cout<<result<<"-"<<mx<<endl;
        }
    }
    if(!flag)
    {
        cout<<"NO Duplicate is present"<<endl;
    }

    
}

int main()
{
    string str;
    cin>>str;
    int n = str.length();
    char arr[n+1];
    strcpy(arr,str.c_str());
    
    solve(arr,n);
    
    
}
