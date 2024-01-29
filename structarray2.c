#include<stdio.h>

struct array1{
  int myage;
  char myname[20];
  int rollno;
};

int main(){
  struct array1 myarr[2];

  for (int i = 0;i<2;i++){
    printf("enter age \t");
    scanf("%d",&myarr[i].myage);
    printf("enter name \t");
    scanf("%s",&myarr[i].myname);
    printf("enter rollno \t");
    scanf("%d",&myarr[i].rollno);
  }

  printf("\n the details of students are:\n");

  for(int i = 0;i < 2;i++){
    printf("age is -%d :name is - %s: rollno is - %d\n",myarr[i].myage,myarr[i].myname,myarr[i].rollno);
  }






  getchar();
  return 0;
}
