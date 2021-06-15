/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>

int max(int [], int);
int min(int [], int);
float average(int [], int);
int mode(int [], int);
int factors(int, int []);
int repeat(int [], int , int);
int primetest(int);

int max(int array[], int i){
int m=array[0];
   for(int x=1;x<i;x++){
      if(m<array[x])
         m=array[x];
   }
return m;
}

int min(int array[], int i){
int m=array[0];
   for(int x=1;x<i;x++){
      if(m>array[x])
         m=array[x];
   }
return m;
}

float average(int array[], int i){
float sum=0;
   for(int x=0;x<i;x++){
	   sum=sum+array[x];
	 }
float avg;
avg=sum/i;
return avg;
}

//function for no of times a number at index 'i' is repeated in array[] of size n
int repeat(int array[], int n, int i){
int N=0;
   for(int x=0;x<n;x++){
      if(array[i]==array[x])
         N++;
   }
return N;   
}

int mode(int array[], int n){
int max=0,mode=0;
   for(int i=0;i<n;i++){
    int y=repeat(array,n,i);
       if(max<y){
          max=y;
          mode=array[i];
       }
   }
return mode;
}

int primetest(int n){
int d,r,t;
   for(d=2;d<n;d++){
    r=n%d;
       if(r==0)
       return 0;
   }
return n;
}
 
int factors(int n, int array[]){
int f=0;
   for(int x=2;x<=n;x++){
      if(primetest(x)!=0){
         if(n%x==0){
            do{
            array[f]=x;
            f++;
            n=n/x;
            }while(n%x==0);
         }
      }
   }
return f;
}

  
  
