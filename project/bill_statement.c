#include<stdio.h>
void printbill(int sum ,int a[])
{
    printf("********** GLA RESTAURENT**********\n      6NEAR JEATH NH2 HIGHWAY     \n      GST GSTIN-09ABCA5444\n      PHONE NO. 1777144534\n");
    printf("chole bhature %d * 50 :\t",a[0]);
    printf("\n");
    printf("berger %d * 30 \t",a[1]);
    printf("\n");
    printf("momo  %d * 40 \t",a[2]);
    printf("\n");
    printf("pizza %d * 100 \t",a[3]);
    printf("\n");
    printf("soda %d * 30 \t",a[4]);
   // printf("\n");
    printf("\n_________________________________\n");
    printf("subtotal \t %d",sum);
    printf("\n");
    float CGST,SGST;
    a[0]=0;
    a[1]=0;
    a[2]=0;
    a[3]=0;
    a[4]=0;

    CGST=(2.5/100)*sum;
    SGST=(2.5/100)*sum;
    float t=sum+CGST+SGST;
    printf("CGST 2.5%% \t %f",CGST);
    printf("\n");
    printf("SGST 2.5%% \t %f",SGST);
    printf("\n");
    printf("GRAND TOTAL :\t%f",t);
    printf("\n");
}
int main()
{
    printf("'_________________________________menu_________________________________'\n");
    printf(" 1.chole bhature: 50\n 2.berger: 30\n 3.momo: 40\n 4.pijja: 100\n 5.soda: 30\n 6.printbill \n");
    int n=0,a[5];
    int m=0,sum=0;
    while (n<7)
    {
        printf("enter menu number\n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
       
       printf("enter plate:");
        scanf("%d",&a[0]);
        printf("\n");
         m=a[0]*50;
        sum=sum+m;
        m=0;
          break;
         case 2:
         printf("enter plate:");
         scanf("%d",&a[1]);
         printf("\n");
         m=30*a[1];
         sum=sum+m;
         m=0;
         break;
         case 3:
         printf("enter plate of momo:");
        scanf("%d",&a[2]);
        printf("\n");
        m=40*a[2];
        sum=sum+m;
        m=0;
        break;
        case 4 :
        printf("enter plate:");
        scanf("%d",&a[3]);
        printf("\n");
        m=100*a[3];
        sum=sum+m;
        m=0;
        break;
        case 5:
        printf("no. of glass:");
        scanf("%d",&a[4]);
        m=30*a[4];
        sum=sum+m;
        m=0;
        break;
        case 6:
        printbill(sum,a);
        sum=0;
        break;
        default:
        printf("____________OUT_____________\n");
            break;
        }
    }
    
    return 0;
    
}
