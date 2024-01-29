#include<stdio.h>


struct person{
  int hisage;
  char hisname[20];
};


int main(){
  struct person p1;

  printf("enter the age of person\n");
  scanf("%d",&p1.hisage);
  printf("enter the name \n");
  scanf("%s",&p1.hisname);


  printf("the details are---  age  : %d ------name : %s",p1.hisage,p1.hisname);

  struct person p2 ={32,"varun"};
  printf("\n the details are---  age  : %d ------name : %s",p2.hisage,p2.hisname);





  getchar();
  return 0;
}
