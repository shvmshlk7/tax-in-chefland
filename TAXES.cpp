#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        
        if (x>100)
        {
            int ans;
            ans=x-10;
            cout<<ans<<endl;
        }
        else
        {
            cout<<x<<endl;
        }
    }
	// your code goes here
	return 0;
}
