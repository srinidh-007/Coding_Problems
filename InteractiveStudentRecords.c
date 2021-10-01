#include <stdio.h>
#include <string.h>
#include <math.h>
//disclaimer : There are 5 courses and they are labeled 101,102,103,104 and 105 respectively.
int count = 0;
struct data
{
    char firstName[15];
    char lastName[15];
    int rollno;
    float cgpa;
    int course[2];
}in[49];
void addStdudent()
{
    printf("First Name : ");
    scanf("%s",in[count].firstName);
    printf("\nLast Name : ");
    scanf("%s",in[count].lastName);
    printf("\nRoll no. : ");
    scanf("%d",&in[count].rollno);
    printf("\nCGPA : ");
    scanf("%f",&in[count].cgpa);
    printf("\nCourses enrolled in : ");
    for(int i=0;i<2;i++)
        scanf("%d",&in[count].course[i]);
    count ++;
}
void findStudent()
{
   int yes=0;
   int roll;
   printf("Roll No. : ");
   scanf("&d",&roll);
   for(int i=0;i<count;i++)
   {
       if(roll==in[i].rollno)
       {
        printf("\nName : %s %s\nCGPA : %.1f\nCourses enrolled in : \n",in[count].firstName,in[count].lastName,in[count].cgpa);
        for(int j=0;j<2;j++)
            printf("%d ",in[count].course[j]);
            yes++;
       }
       if(yes==0)
        printf("student not found\n");
   }

}
void findStudents()
{
    int yes=0;
    char fname[15];
    printf("First Name : ");
    scanf("%s",&fname);
    for(int i=0;i<count;i++)
    {
        int cmp = strcmp(fname,in[i].firstName);
        if(cmp==0)
       {
        printf("\nName : %s %s\nRoll No. : %d\nCGPA : %.1f\nCourses enrolled in : \n",in[count].firstName,in[count].lastName,in[count].rollno,in[count].cgpa);
        for(int j=0;j<2;j++)
            printf("%d ",in[count].course[j]);
        yes++;
       }
        if(yes==0)
        printf("student not found\n");
    }

}
void findStudentc()
{
    int yes=0;
    int cid;
    printf("Course ID : ");
    scanf("%d",&cid);
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(cid==in[i].course[j])
            {
                printf("\nName : %s %s\nRoll No. : %d\nCGPA : %.1f\nCourses enrolled in : \n",in[count].firstName,in[count].lastName,in[count].rollno,in[count].cgpa);
                yes++;
            }
            if(yes==0)
                printf("student not found\n");

        }
    }
}
void totalStudents()
{
    printf("total number of students in the database is %d",count+1);
}
void deleteStudent()
{
   int yes=0;
   int roll;
   printf("Roll No. : ");
   scanf("&d",&roll);
      for(int i=0;i<count;i++)
   {
       if(roll==in[i].rollno)
       {
       in[i].firstName[15]="";
       in[i].lastName[15]="";
       in[i].cgpa=0;
       in[i].rollno=0;
       for(int j=0;j<2;j++)
       in[i].course[j]=0;
       yes++;
       count--;
       printf("\nDetails updated");
       }
       if(yes==0)
         printf("\nStudent not found\n");
   }
}
void updateStudent()
{
   int yes=0;
   int roll;
   printf("Roll No. : ");
   scanf("&d",&roll);
   for(int i=0;i<count;i++)
   {
       if(roll==in[i].rollno)
       {   while(1)
        {
           int input;
           printf("\nTO EXIT PRESS 0\nTO UPDATE ROLL NUMBER PRESS 1\nTO UPDATE FIRST NAME PRESS 2\nTO UPDATE LAST NAME PRESS 3\nTO UPDATE CGPA PRESS 4\nTO UPDATE COURSES ENROLLED PRESS 5\n");
           scanf("%d",&input);
           switch(input)
           {
           case 0:return 0;
           case 1:scanf("%d",&in[i].rollno);break;
           case 2:scanf("%s",in[i].firstName);break;
           case 3:scanf("%s",in[count].lastName);break;
           case 4:scanf("%f",&in[count].cgpa);break;
           case 5:
            for(int i=0;i<2;i++)
            scanf("%d",&in[count].course[i]);
            break;
           default: printf("Enter a valid input\n");
           }
       }
      }
   }
}
void PrintStudentStatistics()
{
    float mean=0;
    for(int i=0;i<count;i++)
        mean=mean+in[i].cgpa;
    mean=mean/count;
    printf("Mean of CGPAs is : %.2f\n",mean);
    float median;
    float value[count];
    for(int i=0;i<count;i++)
     value[i]=in[i].cgpa;
    int temp;
    for (int i=0;i<count;i++)
        {
            for (int j=i+1;j<count;j++)
            {
                if (value[i]>value[j])
                {
                    temp=value[i];
                    value[i]=value[j];
                    value[j]=temp;
                }
            }
        }
     if(count%2==0)
            printf("Median of CGPAs is : %.2f\n",value[count/2]);
     else if(count%2!=0)
            printf("Median of CGPAs is : %.2f\n",value[(count+1)/2]);
     float num=0;
     for(int i=0;i<count;i++)
        num=value[i]-mean;
     num=num*num;
     float ans=num/count;
     ans=sqrt(ans);
     printf("Standard deviation of CGPAS is %.2f\n",ans);
}
void PrintCourseSummaries()
{
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<2;j++)
    {
        if(in[i].course[j]==101)
            c1++;
        if(in[i].course[j]==102)
            c2++;
        if(in[i].course[j]==103)
            c3++;
        if(in[i].course[j]==104)
            c4++;
        if(in[i].course[j]==105)
            c5++;

    }
    }
    printf("Students enrolled in 101 course are %d\n",c1);
    printf("Students enrolled in 102 course are %d\n",c2);
    printf("Students enrolled in 103 course are %d\n",c3);
    printf("Students enrolled in 104 course are %d\n",c4);
    printf("Students enrolled in 105 course are %d\n",c5);
}
int main(void){
    int user_input=0;
    do{
        printf("*********************WELCOME TO Interactive Student Records*********************\n\nTO EXIT THE PROGRAM, PRESS 0\n\nTO ADD A STUDENT TO THE DATABASE, PRESS 1\n\nTO FIND AN EXISTING STUDENT BY ROLL NO., PRESS 2\n\n");
        printf("TO FIND AN EXISTING STUDENT BY FIRST NAME, PRESS 3\n\nTO FIND AN EXISTING STUDENT BY COURSE ID, PRESS 4\n\nTO FIND THE TOTAL NUMBER OF STDUENTS, PRESS 5\n\n");
        printf("TO DELETE AN EXISTING STUDENT BY ROLL NO., PRESS 6\n\nTO UPDATE A STUDENT RECORD, PRESS 7\n\nTO FIND STUDENT STATISTICS, PRESS 8\n\nTO FIND COURSE SUMMARY, PRESS 9\n\n");
        scanf("%d", &user_input);
        switch(user_input){
            case 1: addStdudent(); break;
            case 2: addStdudent(); break;
            case 3: findStudents(); break;
            case 4: findStudentc();break;
            case 5: totalStudents();break;
            case 6: deleteStudent();break;
            case 7: updateStudent();break;
            case 8: PrintStudentStatistics();break;
            case 9: PrintCourseSummaries();break;
        }
    }while(user_input!=0);
    printf("**********************PROGRAM TERMINATED, THANK YOU FOR USING Interactive Student Records**********************");
    return 0;
}


