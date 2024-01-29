#include<stdio.h>


struct empdata{
  int empid;
  char empname[20];
};


void display(struct empdata emp1){
  printf("the employee data is : \n");
  printf("%d : \t",emp1.empid);
  printf("%s : \n",emp1.empname);
}

int main(){
  struct empdata p1;
  printf("\n enter the id of employee: \t");
  scanf("%d",&p1.empid);
  printf(" enter the name of employee: \t");
  scanf("%s",&p1.empname);

  display(p1);




  getchar();
  return 0;
}
