/*Program to print out the highest numbers from exact number.*/
#include<iostream>
using namespace std;
int main()
{
   const int MAX=100;
   double A[MAX],B[MAX],C[MAX];
   int nA,nB,nC,i,m;
   do {
      cout<<"Input number N <"<<MAX<<endl; //You enter a number.
      cin>>nA;
      }
   while(nA<0 || nA>MAX);
   nB=nC=0;
   for(i=0;i<nA;i++)
      {
      cout<<"A["<<i<<"]="; cin>>A[i]; //You will print random numbers untill it will be less than 'nA'
      }
   do {
      cout<<" Input index m ( 0<=m<="<<nA-1<<") "<<endl; //Here you select number's index
      cin>>m;
      }
   while(m<0 || m>=nA);
   for(i=0;i<nA;i++)
      if(A[i]>A[m])   B[nB++]=A[i]; //if numbers is higher then number with index 'm', it goes to B else C
      else   C[nC++]=A[i];
      cout<<" Rezults: "<<endl;
      cout<<" B : "<<endl;
      for(i=0;i<nB;i++)
         cout<<B[i]<<"\t"; //Print all B
         cout<<"\n C : "<<endl;
      for(i=0;i<nC;i++)
         cout<<C[i]<<"\t"; //Print all C
      cin>>i;
      cout<< "Exit\n";
   return 0;
}
