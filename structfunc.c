#include<stdio.h>


struct emp{
  char name[20];
  int empid;
};

void display(char name[],int id){

  printf("\n the name of employee is :%s\n",name);
  printf(" the id of emp is : %d\n",id);


}
int main(){
  struct emp p1;
  printf("\n enter the name \t");
  scanf("%s",&p1.name);
  printf("\n enter the age \t");
  scanf("%d",&p1.empid);

  display(p1.name,p1.empid);




  getchar();
  return 0;
}
