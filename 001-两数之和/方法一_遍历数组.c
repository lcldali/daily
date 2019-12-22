/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *ret = (int *)malloc(2 * sizeof(int));
    *returnSize = 0;
    int i, j;

    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }

    return ret;
}

/*
  执行结果：通过
  显示详情
  执行用时 :184 ms, 在所有 c 提交中击败了67.25%的用户
  内存消耗 :7.6 MB, 在所有 c 提交中击败了30.32%的用户
*/
