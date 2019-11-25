#include <stdio.h>

int MaxSubseqSum4(int N, int List[]){
    int maxSum, currentSum = 0, i;
    for(i = 0; i < N; i++){
        currentSum += List[i];
        if(currentSum > maxSum){
            maxSum = currentSum;
        }else if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}

int main(int argc, char **argv){
    int num;
    int i=0;
    int length;
    scanf("%d", &length);
    int arr[length];
    while (1)
    {
        scanf("%d",&num);
        char c=getchar();
        arr[i++]=num;
        if(c=='\n'){
            break;
        }
   }
   MaxSubseqSum4(length, arr);
   printf("%d", MaxSubseqSum4(length, arr));
}