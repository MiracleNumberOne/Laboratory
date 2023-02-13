#include<iostream>
using namespace std;
int main()
{
   const int MAX=100;
   double A[MAX],B[MAX],C[MAX];
   int nA,nB,nC,i,m;
   do {
      cout<<"Input number N <"<<MAX<<endl;
      cin>>nA;
      }
   while(nA<0 || nA>MAX);
   nB=nC=0;
   for(i=0;i<nA;i++)
      {
      cout<<"A["<<i<<"]="; cin>>A[i];
      }
   do {
      cout<<" Input index m ( 0<=m<="<<nA-1<<") "<<endl;
      cin>>m;
      }
   while(m<0 || m>=nA);
   for(i=0;i<nA;i++)
      if(A[i]>A[m])   B[nB++]=A[i];
      else   C[nC++]=A[i];
      cout<<" Rezults: "<<endl;
      cout<<" B : "<<endl;
      for(i=0;i<nB;i++)
         cout<<B[i]<<"\t";
         cout<<"\n C : "<<endl;
      for(i=0;i<nC;i++)
         cout<<C[i]<<"\t";
      cin>>i;
      cout<< "Exit\n";
   return 0;
}