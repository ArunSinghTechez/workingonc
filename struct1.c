#include<stdio.h>

struct student{
  int rollno;
  char name[20];
  char class1[20];
  int marks;
};

int main(){


struct student data1;
printf("enter the data of 1st student\n");
scanf("%d",&data1.rollno);
scanf("%s",&data1.name);
scanf("%s",&data1.class1);
scanf("%d",&data1.marks);

printf("\n the details of student is :%d\t%s\t%s\t%d\n",data1.rollno,data1.name,data1.class1,data1.marks );







  getchar();
  return 0;
}
