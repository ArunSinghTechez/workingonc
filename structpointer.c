#include<stdio.h>


struct empdata{
  int age;
  char name[20];
};

struct otheremp{
  struct empdata area1;
  struct empdata area2;
};



int main(){
  struct empdata p1;
  struct empdata *ptr1;
  ptr1 = &p1;

  printf("\n enter age \n");
  scanf("%d",&(*ptr1).age);
  printf("\n enter name\n");
  scanf("%s",&ptr1->name);

  printf("\n the data is : %d \t ===========  \t %s\n",ptr1->age,(*ptr1).name);

  struct otheremp jammu_region;
  struct otheremp *subptr;
  subptr = &jammu_region;

  printf("\n enter data of jammu region\n");
  printf("enter age\t");
  scanf("%d",&jammu_region.area1.age);
  printf("enter name \n");
  scanf("%s",&jammu_region.area1.name);

  printf("%d \t : %s \n",jammu_region.area1.age,jammu_region.area1.name);

  printf("\n the data is : %d \t ===========  \t %s\n",ptr1->age,(*ptr1).name);

  printf("\n subpointer call \n");
  printf("\n ------%d \n",subptr->area1.age);






  getchar();
  return 0;
}
