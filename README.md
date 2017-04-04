A.How To Compile:
  make
  
B.Result:
    size:1000
      
    size:10000
    size:100000
    size:1000000
  
  Explanation:
    sort() runs more effiecently than insertion sort.
    sort: O(n log n) 
      similarly to qucik sort
      先找一個指標，將數列中大於這個指標的數，都放在右邊，反之則放在左邊，較省時。
    insertion sort: O(n^2)
      重複地將數字插入已排序的數列中，進行排序，較耗時。
