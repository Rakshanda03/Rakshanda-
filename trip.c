#include<stdio.h>
#include<math.h>
void main()
{
int n,i;
float totalExp,totalExchange,creditDepositeAm[n],avg,exp[n];

printf("Enter number of student\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("Enter Expense by student %d\n",i+1);
scanf("%f",&exp[i]);
}
for(i=0;i<n;i++)
{
totalExp=totalExp+exp[i];
}
avg=totalExp/n;
printf("Total Expense of trip is %.2f\n",totalExp);
printf("Expense by individual student is %.2f\n",avg);

for(i=0;i<n;i++)
{
creditDepositeAm[i]=exp[i]-avg;
printf("Ammount to received by student %d is %.2f\n",i+1,creditDepositeAm[i]);
}
	for(i=0;i<n;i++)
	{
	if(creditDepositeAm[i]>0)
	{
		totalExchange=totalExchange+creditDepositeAm[i];
	}
	}
	printf("Total amount to be exchange is %.2f",totalExchange);
}	
