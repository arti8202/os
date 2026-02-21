#include <stdio.h>

int main() {
    int n = 5;

    int bt1[] = {5,7,6,8,5};
    int io[]  = {2,2,3,1,2};
    int bt2[] = {3,2,4,2,5};

    int ct[5], tat[5], wt[5];
    int total_bt[5];
    float avg_tat = 0, avg_wt = 0;

    // Total burst time = bt1 + io + bt2
    for(int i = 0; i < n; i++)
        total_bt[i] = bt1[i] + io[i] + bt2[i];

    ct[0] = total_bt[0];

    for(int i = 1; i < n; i++)
        ct[i] = ct[i-1] + total_bt[i];

    for(int i = 0; i < n; i++) {
        tat[i] = ct[i];   // AT = 0
        wt[i] = tat[i] - total_bt[i];

        avg_tat += tat[i];
        avg_wt += wt[i];
    }

    printf("Process\tTotalBT\tCT\tTAT\tWT\n");
    for(int i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\t%d\n",
               i, total_bt[i], ct[i], tat[i], wt[i]);
    }

    printf("\nAverage TAT = %.2f", avg_tat/n);
    printf("\nAverage WT = %.2f", avg_wt/n);

    return 0;
}
