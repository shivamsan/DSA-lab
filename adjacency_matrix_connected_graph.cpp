/*-----------------------------------------------------------------------GROUP C---------------------------------------------------------------------------
14. There are flight paths between cities. If there is a flight between city A and city B then there is an edge between the cities.
The cost of the edge can be the time that flight take to reach city B from A, or the amount of fuel used for the journey. 
Represent this as a graph. The node can be represented by airport name or name of the city. 
Use adjacency list representation of the graph or use adjacency matrix representation of the graph. 
Check whether the graph is connected or not. Justify the storage representation used.*/



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
