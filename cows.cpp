#include <iostream>
#include <vector>

using namespace std;

int minutesBook(int &s, int &t, int &r, int n)
{
    int min_t = 0, min_f = 0;
    while(n > 0)
    {
        n = n - s;
        min_f++;
        min_t++;
        if(min_f == t and n > 0)
        {
            min_t += r;
            min_f = 0;
        }
    }
    return min_t;
}

int main()
{
    int n, k;
    int s, t, r;
    vector<int> result;
    cin>>n>>k;
    for(int i=0; i<k; i++)
    {
        cin>>s>>t>>r;
        result.push_back(minutesBook(s, t, r, n));
    }
    for(int i=0; i<k; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}