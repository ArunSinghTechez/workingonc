#include<stdio.h>
#define MAX 3

struct emp{
  int empid;
  char name[20];
  int salary;
};

void display(struct emp *);
int main(){
  struct emp empdata[MAX];
  for (int i = 0;i < MAX;i++){
    printf("enter the emp id\t");
    scanf("%d",&empdata[i].empid);
    printf("\n enter the emp name \t");
    scanf("%s",&empdata[i].name);
    printf("\n enter the salary \t");
    scanf("%d",&empdata[i].salary);
  }

  display(empdata);



  getchar();
  return 0;
}

void display(struct emp arr[]){
  printf("\n the data of emp is :\n");
  for(int i = 0;i<MAX;i++){
    printf("empid is : %d \t",arr[i].empid);
    printf("emp name is : %s \t",arr[i].name);
    printf("emp salary is : %d \n",arr[i].salary);
  }


}
