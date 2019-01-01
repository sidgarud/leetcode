/*Question:
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target)
{
  int i,j;
  int n=numsSize;
  int *a=nums;
  printf("In function\n");
  int *b = (int )malloc(sizeof(int));
  for(i=0;i<n-1;i++)
  {
    printf("In i-loop\n");
    for(j=i+1;j<n-1;j++)
    {
      printf("In j-loop\n");
      if(a[i]+a[j]==target)
        {
          printf("In if stmt\n");
          //int b[]={i,j};
          b[0]=i;
          b[1]=j;
          //printf("%d, %d\n",b[0],b[1]);
          return b;
        }
      else printf("Not yet\n");
    }
  }
    return 0;
}
