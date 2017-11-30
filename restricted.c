#include<stdio.h>
void towersofHanoi(int ,char ,char ,char);
void main()
{
    int num,save =1,i;
    printf("Enter The Number Of Disks on First Peg:");
    scanf("%d",&num);
    for(i=0;i<num;i++)
        save*=3;
    printf("The Pegs are Designated as\n1.Starting Peg as A\n2.Final Peg as C\n3.Auxiliary Peg as B\n");
    printf("The sequence Of Moves Are :\n");
    towersofHanoi(num,'A','C','B');
    printf("Number Of Moves is %d",save -1);
}
towersofHanoi(int num,char startpeg,char finalpeg,char auxpeg )
{
    if(num==0)
        return;
    towersofHanoi(num-1,startpeg,finalpeg,auxpeg);
    printf("MOVE Disk %d from peg %c to peg %c\n",num,startpeg,auxpeg);
    towersofHanoi(num-1,finalpeg,startpeg,auxpeg);
    printf("MOVE Disk %d from peg %c to peg %c\n",num,auxpeg,finalpeg);
    towersofHanoi(num-1,startpeg,finalpeg,auxpeg);
}
