#include<stdio.h>

int main()
{
  int arr[7] = {5,-1,0,-6,23,4,10};
  int sizeArr = 7;
//Дургими бибилиотекам иожно заменить на автоматическое оперделение размера


  for(int i = 0; i < sizeArr-1; i++)
  {
      for(int j = 0; j < sizeArr - i -1; j ++)
      {  
          if(arr[j] > arr[j+1])
          {
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
          }
      }
  }

return 0;
}
