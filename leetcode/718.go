// https://leetcode.com/problems/maximum-length-of-repeated-subarray/description/

/* TIMELIMIT
func findLength(nums1 []int, nums2 []int) int {
    if len(nums2) < len(nums1) {
        temp := nums2
        nums2 = nums1
        nums1 = temp
    }

    start := len(nums1)

    // Start from maximum
    for start != 0 {
        index1 := 0
        countLoop1 := len(nums1) - start + 1
        for i:=0; i<countLoop1; i++ {
            checkArr1 := nums1[index1:index1+start]
            index2 := 0
            countLoop2 := len(nums2) - start + 1
            for j:=0; j<countLoop2; j++ {
                checkArr2 := nums2[index2:index2+start]
                if compareArr(checkArr1, checkArr2) {
                    return start
                }
                index2++
            }
            index1++
        }
        start--
    }

    return start
}

func compareArr(arr1 []int, arr2 []int) bool {
    for i:=0; i<len(arr1); i++ {
        if arr1[i] != arr2[i] {
            return false
        }
    }
    return true
}
*/

func findLength(nums1 []int, nums2 []int) int {
	len1 := len(nums1)
	len2 := len(nums2)
	maxLength := 0

	for i := 0; i < len1; i++ {
		lenTemp := 0
		for j := 0; j < len2; j++ {
			pointer1 := i
			pointer2 := j

			for pointer1 < len1 && pointer2 < len2 && nums1[pointer1] == nums2[pointer2] {
				pointer1++
				pointer2++
				lenTemp++
			}

			if lenTemp > maxLength {
				maxLength = lenTemp
			}

			lenTemp = 0
		}
	}

	return maxLength
}
