class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = defaultdict(int)
        for n in nums:
            freq[n] += 1
        
        max_heap = []
        for key, val in freq.items():
            heapq.heappush_max(max_heap, (val, key))

        result = list()
        for i in range(k):
            result.append(heapq.heappop_max(max_heap)[1])
        
        return result


        