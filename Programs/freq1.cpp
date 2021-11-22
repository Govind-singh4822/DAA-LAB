#include<bits/stdc++.h>
using namespace std;

void printfreq(string str)
{
    unordered_map<char, int>m; // Traverse string str if current character is present  or not

    for(int i=0;str[i];i++)
    {
        if(m.find(str[i])==m.end())  //If the current characters is not found then insert current characters with frequency 1
        {
            m.insert(make_pair(str[i],1));  

        }
        else
        {
            m[str[i]]++;
        }
    }

    for(auto& it:m)
    {
        cout<<it.first<<"-"<<it.second<<endl;
    }
}

int main()
{
    string str;
    cin>>str;

    printfreq(str);
}