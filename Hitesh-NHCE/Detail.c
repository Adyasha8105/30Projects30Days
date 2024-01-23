#include<stdio.h>
struct stu
{
    int mark[2],id;
    char name[50];
    struct dob
    {
        int dd,mn,yr;
    }d;
}s[3];
void main()
{
    int i,j;
    printf("Enter details\n");
    for(j=0;j<2;j++)
    {
        printf("Enter Namee:");
        scanf("%s",&s[j].name);
        printf("\nEnter ID:");
        scanf("%d",&s[j].id);
        printf("\nEnter Dob:");
        scanf("%d%d%d",&s[j].d.dd,&s[j].d.mn,&s[j].d.yr);
        printf("\nEnter Marks of 2 subjects: \n");
        for(i=0;i<2;i++)
            scanf("%d",&s[j].mark[i]);
    }
    printf("Details of the student \n");
    for(j=0;j<2;j++)
    {
        printf("\nID=%d\nName=%s",s[j].id,s[j].name);
        printf("\nDob=%d%d%d\n",s[j].d.dd,s[j].d.mn,s[j].d.yr);
        for(i=0;i<2;i++)
            printf("%d\t",s[j].mark[i]);
    }
}