/*
--------------------------------------------------------------Group E-------------------------------------------------------------------------------------------------
20. Consider a scenario for Hospital to cater services to different kinds of patients as 
a) Serious (top priority),
b) non-serious (medium priority),
c) General Checkup (Least priority).
Implement the priority queue to cater services to the patients.*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout <<"enter the number of patients : " <<endl;
    cin>>n;
    int a[n],p[n];

    for(int i=0;i<n;i++)
    {
        cout<<"enter serial number of patient: "<<endl;
        cin>>a[i];
        cout <<"enter the priority of patient "<<a[i]<<" : " <<endl;
        cin>>p[i];

    }


    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        if(p[j]>p[j+1])
        {
            int temp1 = p[j];
                p[j] = p[j+1];
                p[j+1] = temp1;
            
            int temp2 = a[j];
                a[j] = a[j+1];
                a[j+1] = temp2;
            

        }
    }

    cout<<"The patients on priority  basis are: "<<endl;
    cout<<endl;
    cout<<"serial number \t"<<"priority \t"<< "ward "<<endl;
    cout<<endl;

    for(int i=0;i<n;i++)
    {

        cout<<a[i]<<" \t\t";
        cout<<p[i]<<" \t\t";

        if(p[i]==1)
        {
            cout<<"icu"<<" ";
        }
        else if(p[i]==2)
        {
            cout<<"special"<<" ";
        }
        else
        {
            cout<<"general"<<" ";
        }
        cout<<endl;
    }




}
