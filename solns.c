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


int main(void) {
  int x1[] = {9,5,6,10,2,-3,4};
  assert (max(x1, 7) == 10);

  int y1[] = {5};
  assert (max(y1, 1) == 5);
  
  
  int x2[] = {9,5,6,10,2,-3,4};
  assert (min(x2, 7) == -3);

  int y2[] = {5};
  assert (min(y2, 1) == 5);
  
  
  int x3[] = {9,5,6,10,2,-3,4};
  assert ((average(x3, 7) - 4.7142) < 0.001);

  int y3[] = {5};
  assert (average(y3, 1) == 5.0);
  
  
  int x4[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
assert ((mode(x4, 12) == 4));

  int y4[] = {5};
  assert (mode(y4, 1) == 5);
  
  
  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  
}


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

  
  
