#include<stdio.h>

#define max 30
void main() {
int i,j,n,bt[max],wt[max],tat[max];
float awt =0;
float atat =0;

printf("Enter the number of process");
scanf("%d",&n);
printf("Enter the burst time of the process");
for(int i=0;i<n;i++){
scanf("%d",&bt[i]);
}
printf("Process\t burst time\t waiting time\t turn around time\t");
for(int i=0;i<n;i++){
wt[i] =0;
tat[i] = 0;
for(int j=0; j<i;j++){
wt[i] = wt[i] + bt[j];
}
tat[i] = wt[i] + bt[i];
awt = awt+wt[i];
atat = atat+tat[i];
printf("%d\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
}
awt =awt/n;
atat = atat/n;
printf("Average waiting time = %f\n",awt);
printf("Average turn around time = %f",atat);

}
