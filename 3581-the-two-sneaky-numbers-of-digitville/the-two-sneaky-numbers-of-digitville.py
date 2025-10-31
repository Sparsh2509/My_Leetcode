class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        lst=[]
        for w in nums:
            if nums.count(w)==2 and w not in lst:
                lst.append(w)

        return lst