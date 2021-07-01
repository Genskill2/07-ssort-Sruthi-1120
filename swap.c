#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void ssort(int a[], int n){
int i;
for(i=0;i<n;i++){
swap_max(a,n,i);
}
}

void swap_max(int a[], int n, int b){
int i,j;
int temp;
for (i=j=b;i<n;i++){


    if(a[i]>a[j]){
    j=i;;
    }
    }
     temp=a[b];
     a[b]=a[j];
     a[j]=temp;
   
    }
