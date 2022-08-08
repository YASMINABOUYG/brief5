
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    int note1[13];
    int note2[15];
    int tri[28];
    int i, j, N, moy,k=13;
    int c =0;
    int min, max;
do{
    printf ("to exit the program enter 0\n");
    printf("give class number : ");
    scanf("%d", &N);
    switch (N)
    {
    case 1:
        printf("enter grades for class 1:\n");
        for (i = 0; i < 13; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &note1[i]);
        }
        max = note1[0];
        min = note1[0];
    
        for (i = 1; i < 13; i++)
        {
            if (max < note1[i])
                max = note1[i];
        }
        for (i = 1; i < 13; i++)

        {
            if (note1[i] < min)
                min = note1[i];
        }
        for (i = 0; i < 13; i++)
                {if (note1[i]>=10 ) {c++;}
                }
                printf ("the number of students >=10 is :%d\n",c);
        printf("the largest average is:%d\n the smallest average is : %d\n ", max, min);
        break;

    case 2:
        printf("enter grades for class 2:\n");
        c=0;
        for (i = 0; i < 15; i++)
        {
            printf("Note[%d]= ", i);
            scanf("%d", &note2[i]);
        }
        max = note2[0];
        min = note2[0];
        for (i = 1; i < 15; i++)
        {
            if (max < note2[i])
                max = note2[i];
        }
        for (i = 1; i < 15; i++)
        {
            if (min > note2[i])
                min = note2[i];
        }
                for (i = 0; i < 15; i++)
                {if (note2[i]>=10 ) {c++;}
                }
                printf ("the number of students >=10 is :%d\n",c);
        
        printf("the largest average is:%d\n the smallest average is: %d\n", max, min);
        break;
    case 3:
        printf("enter grades for both classes :\n");
    for (i = 0; i < 13; i++)
    {
        tri[i]=note1[i];
    }
    for (i = 0; i < 15; i++)
    {
         tri[k]=note2[i];
         k++;
    }
    for (i=0;i<27;i++)
     for (j = i + 1; j < 28; j++)
        { 
            if (tri[i] > tri[j])
            {
                m = tri[i];
                tri[i] = tri[j];
                tri[j] = m;
            }
}
            printf ("the grades of two classes in ascending order is:");
            for (i = 0; i < 28; i++){
                printf("%d\t",tri[i]);
            }

    default:
        printf("choose 1 or 2 or 3");
    }
    }while(N!=0);
    }




