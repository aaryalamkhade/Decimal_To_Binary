#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int decimal;
	cout<<"Enter number:";
	cin>>decimal;
	int gh=decimal;
	std::vector<int> binary;
	while(decimal!=1 || decimal!=0)
	{
		gh=decimal%2;
		decimal=decimal/2;
		binary.push_back(gh);
		if(decimal==0)
		break;
	}
	for(int i=binary.size()-1;i>=0;i=i-1)
	{
			cout<<binary[i];
	}
	
}
