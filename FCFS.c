#include <stdio.h>
void main()
{int i,np,at[100],bt[100],st[100],wt[100],tt[100],a,b,j;
float swt=0,stt=0;
 char p[100],pr;
 printf("Enter no of processes");
 scanf("%d",&np);
 printf("\n Enter process, Arrival time and Burst time");
 for(i=0;i<np;i++)
 {
     printf("\n Process-");
     scanf("%s",&p[i]);
     printf("\n Arrival time-");
     scanf(" %d",&at[i]);
     printf("\n Burst time-");
     scanf("\n %d",&bt[i]);
 }
for(i=0;i<np;++i)
 {for(j=i+1;j<np;++j)
 {if(at[i]>at[j])
 {   a=at[i];
     at[i]=at[j];
     at[j]=a;

      pr=p[i];
     p[i]=p[j];
     p[j]=pr;

      b=bt[i];
     bt[i]=bt[j];
     bt[j]=b;
 }}}
st[0]=at[0];
for(i=1;i<np;i++)
{if(at[i]>(st[i-1]+bt[i-1]))
   st[i]=at[i];
 else
    st[i]=st[i-1]+bt[i-1];
}
for(i=0;i<np;i++)
{wt[i]=st[i]-at[i];
tt[i]=wt[i]+bt[i];
swt=swt+wt[i];
stt=stt+tt[i];
}
 printf("PROCESS\tAT\tBT\tST\tWT\tTT\n");
 for(i=0;i<np;i++)
 {printf("%c\t%d\t%d\t%d\t%d\t%d\n",p[i],at[i],bt[i],st[i],wt[i],tt[i]);
 }
 printf("Average waiting time= %f\n",(swt/np));
 printf("Average turnaround time= %f\n",(stt/np));
 printf("\nGANT CHART\n");
 for(i=0;i<np;i++)
 {printf(" |%c\t",p[i]);
 }
  printf("|\n");
printf("%d",st[0]);
 for(i=0;i<np;i++)
 {printf("\t%d ",st[i]+bt[i]);
 }
 }
