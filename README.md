A.How To Compile:
  make
  
B.Result:
    size:1000
      sort(): 0.000192 seconds
      v1/v2 are different.
      insertion_sort(): 0.009613 seconds
      v1/v2 are the same.

    size:10000
      sort(): 0.002511 seconds
      v1/v2 are different.
      insertion_sort(): 0.777323 seconds
      v1/v2 are the same.

    size:100000
      sort(): 0.031354 seconds
      v1/v2 are different.
      insertion_sort(): 82.8511 seconds
      v1/v2 are the same.
      
    size:1000000
      sort(): 0.305647 seconds
      v1/v2 are different.
      insertion_sort(): 8545.9 seconds
      v1/v2 are the same.
  
  Explanation:
    sort() runs more effiecently than insertion sort.
    sort: O(n log n) similarly to qucik sort 先找一個指標，將數列中大於這個指標的數，都放在右邊，反之則放在左邊，較省時。
    insertion sort: O(n^2) 重複地將數字插入已排序的數列中，進行排序，較耗時。
