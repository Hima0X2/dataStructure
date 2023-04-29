#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i;
     cin>>n;
     int *a=(int*)malloc(n*sizeof(int));
     for(i=0;i<n;i++){
          a[i]=i+1;
     }
     for(i=0;i<n;i++){
         printf("%d  ",a[i]);
     }
     cout<<endl;
       int *c=(int*)calloc(n,sizeof(int));
     for(i=0;i<n;i++){
          c[i]=i+1;
     }
     for(i=0;i<n;i++){
         printf("%d  ",c[i]);
     }
     cout<<endl;
     int *b=(int*)realloc(NULL,n*sizeof(int));
     for(i=0;i<n;i++){
         printf("%d  ",b[i]);
     }
}
