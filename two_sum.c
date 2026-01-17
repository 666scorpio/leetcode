#include <stdlib.h>

int	*twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	int	i, j;
	int	*arr;

	arr = malloc(2 * sizeof(int));
	i = 0;
	*returnSize = 2;
	while (i < numsSize)
	{
		j = i + 1;
		while (j < numsSize)
		{
			if (nums[i] + nums[j] == target)
			{
				arr[0] = i;
				arr[1] = j;
				return (arr);
			}
			j++;
		}
		i++;
	}
	return (arr);
}
