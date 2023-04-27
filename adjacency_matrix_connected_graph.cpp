#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter the number of Cities : "<<endl;
cin>>n;	

int a[n][n],flag;
string c[n];
cout<<"Enter the names of cities : "<<endl;
for(int i=0;i<n;i++)
{
cout << i+1 << " . City Name : ";
cin>>c[i];
}
cout<< "Enter time taken to travel from city to city "<< endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout << "Time taken to travel from  " << c[i] << " to " << c[j] << " : ";
cin>>a[i][j];
}
}

cout<<"adjacency matrix : "<<endl;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<a[i][j]<<"\t";
}
cout<<endl;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              

for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if( a[i][j] != a[j][i])
{
	flag = 0;
}

}
}

if (flag ==0)
{
cout<<"The graph is not connected"<<endl;
}

else
{
cout<<"The graph is connected"<<endl;
}
}