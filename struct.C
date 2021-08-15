
#include <stdio.h>
struct Students
{
  char name[50];
  int regno;
  char grade;
  char dept[50];
  int age;
};
int main ()
{
  struct Students s1 = { "Riya", 4550, 'O', "CSE", 21 };
  struct Students s2 = { "Wilson", 4532, 'A', "ECE", 21 };
  struct Students s3 = { "Maddy", 4535, 'B', "EEE", 21 };
  struct Students s4 = { "Irfan", 4512, 'O', "CSE", 21 };
  struct Students s5 = { "Navia", 4544, 'O', "CSE", 21 };

  printf ("the student1 detail is:%s\t%d\t%c\t%s\t%d\n",s1.name,s1.regno,s1.grade,s1.dept,s1.age);
  printf ("the student2 detail is:%s\t%d\t%c\t%s\t%d\n",s2.name,s2.regno,s2.grade,s2.dept,s2.age);
  printf ("the student3 detail is:%s\t%d\t%c\t%s\t%d\name",s3.name,s3.regno,s3.grade,s3.dept,s3.age);
  printf ("the student4 detail is:%s\t%d\t%c\t%s\t%d\n",s4.name,s4.regno,s4.grade,s4.dept,s4.age);
  printf ("the student5 detail is:%s\t%d\t%c\t%s\t%d",s5.name,s5.regno,s5.grade,s5.dept,s5.age);

return 0;
}
