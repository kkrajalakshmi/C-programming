
#include <stdio.h>
struct
{
  char name[50];
  int regno;
  char grade;
  char dept[50];
  int age;
}s1,s2,s3,s4,s5;
int main ()
{
   //s1 = { "Riya", 4550, 'O', "CSE", 21 };
   //s2 = { "Wilson", 4532, 'A', "ECE", 21 };
   //s3 = { "Maddy", 4535, 'B', "EEE", 21 };
   //s4 = { "Irfan", 4512, 'O', "CSE", 21 };
   //s5 = { "Navia", 4544, 'O', "CSE", 21 };

  printf ("enter the student1 detail :");
  scanf("%s\t%d\t%c\t%s\t%d\n",s1.name,&s1.regno,s1.grade,s1.dept,&s1.age);
  printf ("enter the student2 detail :");
  scanf("%s\t%d\t%c\t%s\t%d\n",s2.name,&s2.regno,s2.grade,s2.dept,&s2.age);
  printf ("enter the student3 detail :");
  scanf("%s\t%d\t%c\t%s\t%d\n",s1.name,&s3.regno,s3.grade,s3.dept,&s3.age);
  printf ("enter the student4 detail :");
  scanf("%s\t%d\t%c\t%s\t%d\n",s1.name,&s4.regno,s4.grade,s4.dept,&s4.age);
  printf ("enter the student5 detail :");
  scanf("%s\t%d\t%c\t%s\t%d\n",s1.name,&s5.regno,s5.grade,s5.dept,&s5.age);
return 0;

}

