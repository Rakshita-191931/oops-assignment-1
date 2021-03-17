
#include<iostream>
using namespace std;
int read_matrix(int ,int);
int display_matrix(int ,int);
int getarray[50][50];
int main()
{
	int m,n;
	cout<<"Enter the number of rows:";
	cin>>m;
	cout<<"Enter the number of columns:";
	cin>>n;
	cout<<endl;
	read_matrix(m,n);
	cout<<endl;
	display_matrix(m,n);
	return 0;
}
read_matrix(int row,int column)
{
	for(int i=1;i<=row;i++) 
	for(int j=1;j<=column;j++)
	{
		cout<<"Element at ["<<i<<"]["<<j<<"] = ";
		cin >> getarray[i][j];
	}
}
display_matrix(int row,int column)
{
	for(int i=1;i<=row;i++)
	{
		for(int j=1;j<=column;j++)
		cout<<getarray[i][j]<<"\t";
		cout<<endl;
	}
}
