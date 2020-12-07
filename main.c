#include <stdio.h>
#include <stdlib.h>
void f(int *p,int *q, int m,int n){
int s[m+n];
int j,k,t,l;
for(j = 0;j<m+n;j++){
    if (j<m){
        s[j]=p[j];
    }else{
    s[j]=q[j-m];
    }
}
    for(j =m;j<m+n;j++){
        for(k = j-m;k<j;k++){
            if(s[j]<s[k]){
               t = s[j];
               for(l = j;l>k;l--){
                s[l]=s[l-1];
               }
                s[k]=t;
            }
        }
    }
for(j = 0;j<m+n;j++){
    printf("%d\n",s[j]);
}
}
int main()
{
   int m,n,i;
   int *p,*q;
printf("vvedite chislo elementov v 1 massive,vo 2,elementi pervogo,elementi vtorogo");
   scanf("%d%d",&m,&n);
   p = (int*)malloc(m*sizeof(int));
   q = (int*)malloc(n*sizeof(int));
   for(i = 0;i<m;i++){
    scanf("%d",&p[i]);
   }
    for(i = 0;i<n;i++){
    scanf("%d",&q[i]);
   }
   f(p,q,m,n);
    return 0;
}
