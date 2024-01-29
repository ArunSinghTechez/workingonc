#include<stdio.h>
#include<string.h>

struct student{
  int roll;
  char name[20];
};


struct student create_student(){
  struct student stu1;
  printf("\n enter the student roll no \n");
  scanf("%d",&stu1.roll);
  printf("\n enter the student name \n");
  scanf("%s",stu1.name);
  return stu1;

}

void display(struct student s1){

  printf("\n the roll no is : %d\t",s1.roll);
  printf("the name of the student is : %s \t",s1.name);
}

int main(){
  struct student student1;
  student1 = create_student();
  display(student1);




  getchar();
  return 0;
}
