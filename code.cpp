#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a[5];
	    int x=0;
	    for(int i=0;i<5;i++)
	    cin>>a[i];
	    for(int i=0;i<5;i++)
	    {
	        if(a[i]==1)
	        x++;
	        
	    }
	    if(x==0)
	    cout<<"Beginner"<<"\n";
	    else if(x==1)
	    cout<<"Junior Developer"<<"\n";
	    else if(x==2)
	    cout<<"Middle Developer"<<"\n";
	    else if(x==3)
	    cout<<"Senior Developer"<<"\n";
	    else if(x==4)
	    cout<<"Hacker"<<"\n";
	    else if(x==5)
	    cout<<"Jeff Dean"<<"\n";
	    
	}
	return 0;
}
