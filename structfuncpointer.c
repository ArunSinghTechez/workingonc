#include<stdio.h>

struct emp{
  int empid;
  char name[20];
  int salary;
};

void  display(struct emp e){
  printf("the data of employee is :\n");
  printf(":- %d \t %s \t %d \n",e.empid,e.name,e.salary);
}

void increment(struct emp *inc){
  inc->salary = inc->salary + 1000;
}

int main(){
  struct emp p1;
  printf("enter the empid\n");
  scanf("%d",&p1.empid); //always remembar that in c ,always use scanf statement with address reference &////
  printf("enter the emp name \n");
  scanf("%s",&p1.name);
  printf("enter the salary\n");
  scanf("%d",&p1.salary);

  display(p1);
  increment(&p1);// very much important pass whole structure to function
  display(p1);



  getchar();
  return 0;
}
