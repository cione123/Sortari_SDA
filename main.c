/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int biti(int x,int k,int j){ 
    return (x>>k) & ~(~0<<j);
    }
void Radix_Direct(int n, int v[]){
    
    
    int b = 8;
    
    int m = 4;
    
    int i,j,k;
    int M1=pow(2,m);
    int Trecere;
    int Tablou[M1]; 
    int t[n];

    for(Trecere=0;Trecere<=(m-1)||Trecere<=b;Trecere++)
    {
        for(i=0;i<M1;i++)
        {
            Tablou[i] = 0;
        }
        for(i=0;i<n;i++)
        {
            k=biti(v[i],Trecere*m,m);
            Tablou[k]++;
        }
        
       for(j=1;j<=(M1-1);j++)
        {
            Tablou[j]=Tablou[j-1]+Tablou[j];
        }
        for(i=(n-1);i>=0;i--)
        {
            k=biti(v[i],Trecere*m,m);
            t[Tablou[k]-1]=v[i];
            Tablou[k]--;
            
        }
       
    }
    
        for(i=0;i<n;i++)
        {
             printf("%d ",t[i]);
        }
    //k=b
    //k==b    
}


int main()
{
    int n=5;
    int v[]={12,3,7,6,8};
    Radix_Direct(n,v);

    return 0;
}
