#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort(int n,char** a){
   char min[200];
  int i,k;
  for(i = 1; i < n; i++) {
    int min_ID=i;
    strcpy(min,a[i]); 
    for(k = i+1; k < n; k++) {
    if(strcmp(a[k],min) < 0) {
          strcpy(min,a[k]); 
         min_ID=k;
    }    
    }
    char *p=a[i];
     a[i]=a[min_ID];
      a[min_ID]=p;
  }
  for(int i=1;i<n;i++){
     printf("%s\n",a[i]);
     }
}
int main(int argc,char *argv[]){ 
sort(argc,argv);
return 0;
}
