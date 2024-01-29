#include<stdio.h>


struct emp{
  int empid;
  char empname[20];
  float empsal;
};

int main(){


  struct emp p1 = {11,"arun",23000.50};
  struct emp p2 ={12,"varun",25000.00};
  struct emp p3;
  p3=p1;

  int empval;

  empval = (p1.empid == p3.empid)? 1:0;
  if (empval==1){
    printf("yes they are same");
  }
  else{
   printf("they are not same");
  }

printf("\n");
printf("details are : %d \t % s \t %f \n",p1.empid,p1.empname,p1.empsal);
printf("details are : %d \t % s \t %f \n",p2.empid,p2.empname,p2.empsal);






  getchar();
  return 0;
}
