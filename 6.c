#include <stdio.h>
struct student
{
    char Name[50],gender[10],add[50],dep[20];
    int roll,dob;
    float h,w;
} s[10];

int main()
{
    int i,n;
    printf("Enter Number of Students: ");
    scanf("%d",&n);
    printf("Enter information of students:\n");
    for (i = 0; i < n; ++i)
    {
        printf("STUDENT %d\n",i+1);
        printf("Enter Name: ");
        scanf("%s",s[i].Name);
        printf("Enter roll number: ",s[i].roll);
        scanf("%d",&s[i].roll);
        printf("Enter Department: ");
        scanf("%s",s[i].dep);
        printf("Enter Date of Birth: ");
        scanf("%d",&s[i].dob);
        printf("Enter Gender: ");
        scanf("%s",s[i].gender);
        printf("Enter Date of Height: ");
        scanf("%f",&s[i].h);
        printf("Enter Date of Weight: ");
        scanf("%f",&s[i].w);
        printf("Enter Address: ");
        scanf("%s",s[i].add);
    }

    printf("\n\t-----------------Displaying Information-----------------\n\n");

    for (i = 0; i < n; ++i)
    {
        printf("STUDENT %d\n",i+1);
        printf("Name: ");
        puts(s[i].Name);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Department: ");
        puts(s[i].dep);
        printf("Date of Birth: %d\n", s[i].dob);
        printf("Gender: ");
        puts(s[i].gender);
        printf("Height: %.2f\n", s[i].h);
        printf("Weight: %.2f\n", s[i].w);
        printf("Address: ");
        puts(s[i].add);
    }
    return 0;
}
