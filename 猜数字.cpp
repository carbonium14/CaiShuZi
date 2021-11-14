#include<windows.h>
#include<iostream>
#include<cstring>
#include<ctime>
#include<cmath> 
using namespace std;
bool playagain()
{
	cout<<"do you want to play again?(y/n)";
	string temp;
	cin>>temp;
	if(temp!="y"&&temp!="Y")
	{
		return true;
	}
	return false;
}
int main()
{
	int xiao=0,da=0;
	while(1)
	{
		cout<<"enter your low limit:";
		cin>>xiao;
		cout<<"enter your high limit:";
		cin>>da;
		if(da<xiao)
		{
			cout<<"wrong input!please input again!"<<endl;
		}
		else
		{
			break;
		}
	}
	srand(time(0));
	int res=xiao+rand()%(da+1-xiao);
	int step=0;
	while(1)
	{
		int ans=0;
		cout<<"guess it:";
		cin>>ans;
		if(ans>res)
		{
			cout<<"too high"<<endl;
			step++;
		}
		else if(ans<res)
		{
			cout<<"too low"<<endl;
			step++;
		}
		else if(ans==res)
		{
			cout<<"you got it!"<<endl;
			if(step>(log(da-xiao)/log(2)))
			{
				cout<<"you can find the better solution by less steps"<<endl;
				cout<<"tips:find it in the middle"<<endl;
			}
			bool again=playagain();
			if(again)
			{
				break;
			}
			res=xiao+rand()%(da+1-xiao);
			step=0;
		}
	}
	return 0;
} 
