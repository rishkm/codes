#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i,j;
	    
	   
	    int a[4];
	    int b[4];
	    for(i=1;i<=3;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=1;i<=3;i++)
	    {   int af=1;
	        for(j=1;j<=3;j++)
	        {
	            int x=i-j;
	            int y=a[j]-a[i];
	            if(y!=0&&x/y>=1)
	            {
	                af++;
	            }
	            
	       }
	       b[i]=af;
	   }
//	   	for(i=1;i<=n;i++)
//	    {
//	        cout<<b[i]<<" ";
//	    }
	   
	   cout<<*min_element(b+1,b+4)<<" "<<*max_element(b+1,b+4)<<endl;
	    
	}
	return 0;
}

