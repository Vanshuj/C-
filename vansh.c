// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// void Mat_Add(int [3][3],int[3][3]);
// void Mat_Sub(int [3][3],int [3][3]);
// void Mat_Mul(int [3][3],int [3][3]);
// void Mat_Tra(int [3][3],int [3][3]);
// void main ()
// {
//     int a[3][3],b[3][3],i,j,ch;
//     printf("Enter the elements of first matrix:\n");
//     for (i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("\n Matrix 1s :\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\t %d",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Enter the elements of second matrix :\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     printf("\n matrix 2 is :\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("\t %d",b[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\nEnter 1 for add");
//     printf("\nenter 2 for sub");
//     printf("\nEnter 3 for mul");
//     printf("\nEnter 4 for transpose");
//     printf("\n Enter users choice:");
//     scanf("%d",&ch);
//     switch(ch)
//     {
//         case 1:
//                Mat_Add(a,b);
//                break;
//         case 2:
//                Mat_Sub(a,b);
//                break;
//         case 3:
//                Mat_Mul(a,b);
//                break;
//         case 4:
//                Mat_Tra(a,b);
//                break;
//         default:
//                 printf("Invalid choice ");                            
//     }
//     getch();
// }
// void Mat_Add(int A[3][3],int B[3][3])
// {
//     int C[3][3],i,j;
//     printf("\n Sum of two matrix is =\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             C[i][j]=A[i][j]+B[i][j];
//             printf("\t %d",C[i][j]);
//         }
//         printf("\n");
//     }
// }
// void Mat_Sub(int A[3][3],int B[3][3])
// {
//     int C[3][3],i,j;
//     printf("\n Difference of two matrix =\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             C[i][j]=A[i][j]-B[i][j];
//             printf("\t %d",C[i][j]);
//         }
//         printf("\n");
//     }
// }
// void Mat_Mul(int A[3][3],int B[3][3])
// {
//     int C[3][3],i,j,k;
//     printf("\n Product of two matrix =\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             C[i][j]=0;
//             for(k=0;k<3;k++){
//                 C[i][j]=C[i][j]+(A[i][j]*B[i][j]);
//                 printf("\t %d",C[i][j]);
//             }
//         }
//         printf("\n");
//     }
// }
// void Mat_Tra(int A[3][3],int B[3][3])
// {
//     int TA[3][3],TB[3][3],i,j;

//     printf("\nTranspose of matrix first =\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             TA[j][i]=A[i][j];
//             printf("\t %d",TA[j][i]);
//         }
//         printf("\n");
//     }
//     printf("\n Transpose of matrix second =\n");
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             TB[j][i]=B[i][j];
//             printf("\t %d",TB[j][i]);
//         }
//         printf("\n");
//     }
// }





// #include<stdio.h>
// #include<math.h>
// int power(int,int);
// void main()
// {
//     int p,x,y;
//     printf("Enter the values of x anf y\n");
//     scanf("%d,%d",&x,&y);
//     p=power(x,y);
//     printf("%d is answer",p);
// }
// int power(int n,int m)
// {
//     int p;
//     if(m==0)
//     return (1);
//     else if (m<1)
//     printf("error");
//     else
//     p=n*power(n,m-1);
//     return(p);
// }

#include<stdio.h>
#include<conio.h>
int Partition(int [],int,int);
int QuickSort(int [],int, int );

void main()
{
    int a[10],i,lb,ub;
    printf("Enter  elements of array :\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    QuickSort(a,lb,ub);
    printf("\nSorted elements are :\n");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
}
int Partition(int a[],int lb,int ub)
{
    int t,down,up,p;
    up=a[lb];
    down=lb;
    up=ub;
    while(down<up)
    {
        while(p>=a[down]&&down<ub)
        {
            down++;
            while(p<a[up])
            up--;
            if(down<up)
            {
                t=a[down];
                a[down]=a[up];
                a[up]=t;
            }
        }
        a[lb]=a[up];
        a[up]=p;
        return up;
    }
}
   int QuickSort(int a[],int lb,int ub )
   {
    int j;
    if(lb<ub)
    {
        j=Partition(a,lb,ub);
        QuickSort(a,lb,j-1);
        QuickSort(a,j+1,ub);
    }
   }