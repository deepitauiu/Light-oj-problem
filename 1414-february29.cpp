#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <string,int>m;

    long long int i,j,k,n,t;
    string m1,b,m2;
    long long int year1,date1,year2,date2,f0=0,f1=0;
    string s[20]= {"A","January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    for(i=1; i<=12; i++)
    {
        m[s[i]]=i;

    }

    cin>>t;
    for(i=1; i<=t; i++)
    {
        f0=0,f1=0;
        cin>>m1>>date1>>b>>year1;

        cin>>m2>>date2>>b>>year2;
        j=0;
        /*if((m[m1]>2)||(m[m1]==2&&date1<29))
        {
            year1++;
        }
        while (1)
        {


            if((year1%4==0&&year1%100!=0)||(year1%400==0))
            {
                f0=1;
                break;

            }
            if(year1==year2)
                break;

            year1++;


        }
        if( (m[m1]<=2&&m[m2]>=2) || (m[m1]>=2&&m[m2]>=2&&m[m2]<=m[m1])||(m[m2]==2&&date2==29)||m[m2]!=1)
        {

        }
        else
            year2--;
        while (1)
        {

            if((year2%4==0&&year2%100!=0)||(year2%400==0))
            {
                f1=1;
                break;

            }
            year2--;
            if(year2<=year1)
                break;


        }*/
year1--;

 if(m[m1]>2 )
            year1++;
        if(    (m[m2]<2) || (  m[m2]==2 && date2<29))
            year2--;

        long long int leapyear=(year2/4-year2/100+year2/400)-(year1/4-year1/100+year1/400);




            cout<<"Case "<<i<<": "<<leapyear<<endl;


    }
    return 0;


}
