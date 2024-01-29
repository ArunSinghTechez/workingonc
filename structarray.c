#include<stdio.h>
#include<string.h>

struct pointarray{

  int myroll;
  char myname[20];




};

int main(){

struct pointarray empdata[5] = {

  {11,"arun"},
  {12,"varun"},
  {13,"tarun"}

};

for(int i = 0;i<5;i++){
  printf("%d : %s \t",empdata[i].myroll,empdata[i].myname);
}



  getchar();
  return 0;
}
