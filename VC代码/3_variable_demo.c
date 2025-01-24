#include <stdio.h>
//知Mike score is 98 and John score is 89,登记时看错行，Now please 互换。
 int main(){
    int Mike_score = 89;
    int John_score = 98;
   printf("Mike score is %d and John score is %d\n",Mike_score ,John_score);

    Mike_score = John_score;
    John_score = 89;
    printf("Mike score is %d and John score is %d\n",Mike_score ,John_score);
    return 0;
 }  