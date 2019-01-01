/*Question:
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
#include<stdio.h>
int i,j,n;
void twoSum(int* a, int target)
{
  printf("In function\n");
  for(i=0;i<n-1;i++)
  {
    printf("In i-loop\n");
    for(j=i+1;j<n-1;j++)
    {
      printf("In j-loop\n");
      if(a[i]+a[j]==target)
        {
          printf("In if stmt\n");
          int b[]={i,j};
          printf("%d, %d\n",b[1],b[2]);
          //return b;
        }
      else printf("Not yet\n");
    }
  }
}
void main()
{
  int target=9;
  /*printf("Enter target sum\n");
  scanf("%d\n",&target);
  printf("Enter array\n");
  scanf("%d\n",a);*/
  int arr[]={1,2,3,4,5};
  int n=sizeof(arr)/sizeof(int);
  printf("len is %d\n",n);
  twoSum(arr,target);
}
