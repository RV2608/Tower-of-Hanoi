#include<stdio.h>
void towersofHanoi(int ,char ,char ,char);
void main()
{
    int num;
    printf("Enter The Number Of Disks on First Peg:");
    scanf("%d",&num);
    printf("The Pegs are Designated as\n1.Starting Peg as A\n2.Final Peg as C\n3.Auxiliary Peg as B\n");
    printf("The sequence Of Moves Are :\n");
    towersofHanoi(num,'A','C','B');
}
towersofHanoi(int num,char startpeg,char finalpeg,char auxpeg )
{
    if(num==1)
    {
        printf("MOVE Disk 1 from peg %c to peg %c\n",startpeg,finalpeg);
        return;
    }
    towersofHanoi(num-1,startpeg,auxpeg,finalpeg);
    printf("MOVE Disk %d from peg %c to peg %c\n",num,startpeg,finalpeg);
    towersofHanoi(num-1,auxpeg,finalpeg,startpeg);
}
