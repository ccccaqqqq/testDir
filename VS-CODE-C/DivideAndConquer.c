#include <stdio.h>

int Max3(int A, int B, int C){
  return A > B ? A > C ? A : C : B > C ? B : C;
}

int DivideAndConquer(int List[], int left, int right){
  int MaxLeftSum, MaxRightSum;
  int MaxLeftBorderSum, MaxRightBorderSum; // 存放最大跨中线最大结果

  int LeftBorderSum, RightBorderSum; // 存放临时结果
  int center, i;

  if(left == right){
    if(List[left] > 0) return List[left];
    else return 0;
  }

  // 拆分成一个个小的子列，拆到最后会成为一个只有一个元素的子列，可直接返回结果
  center = (left + right) / 2;
  MaxLeftSum = DivideAndConquer( List, left, center );
  MaxRightSum = DivideAndConquer( List, center + 1, right );

  // 计算跨中线的子列和
  // 中线往左扫描
  MaxLeftBorderSum = 0;
  LeftBorderSum = 0;
  for (i = center; i >= left; i--){
    LeftBorderSum += List[i];
    if(LeftBorderSum > MaxLeftBorderSum)
      MaxLeftBorderSum = LeftBorderSum;
  }
  // 中线往右扫描
  MaxRightBorderSum = 0;
  RightBorderSum = 0;
  for (i = center + 1; i <= right; i++){
    RightBorderSum += List[i];
    if(RightBorderSum > MaxRightBorderSum)
      MaxRightBorderSum = RightBorderSum;
  }
  int result = Max3(MaxLeftSum, MaxRightSum, MaxLeftBorderSum + MaxRightBorderSum);
  printf("%d\n", result);
  return result;
}

int main(int argc, char *args[]){
  int List[] = { 4, -3, 5, -2, -1, 2, 6, -2 };
  printf("%d", DivideAndConquer( List, 0, 7));
}

