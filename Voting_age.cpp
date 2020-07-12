#include<iostream>

using namespace std;

int main()
{
   int age;
	 cout<<"Enter your age : ";
	 cin>>age;
	 if(age>=18)
	    cout<<"You are eligible to vote";
		else
		 {
		   cout<<"You are not eligible to vote\n";
			 cout<<"Wait for "<<18-age<<" ";
			 if(18-age==1)
			    cout<<"year\n";
			 else
			    cout<<"years\n";
			 cout<<"After that you can vote\n";
			}
		return 0;
	}
