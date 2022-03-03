## Requirements

This  assignment  lets  you  get  familiar  with  the  minimum  spanning  tree  (MST)  problem.   We would like you to implement any fast algorithm (Prim, Kruskal, or whatever MST solvers) for finding the minimum spanning tree from a sparse graph. 


An O(mlogn) solution for m edges and n nodes is preferred. 


<!--
There are 3 sparse graphs whose sizes are different.  The first one (L100) has 100 nodes, while the lastlargest one (L5000) comprises of 5000 nodes.
-->


## Test case description

We use # for the comment and we have e.g. n = 5 to indicate the value n of number of nodes.  The node index starts from 1.  There is a whitespace after #,n and = to make the parsing process easily.If there is an edge between two nodes x and y, there will be two lines with the format of x y w and y x w, where w is the weight of the edge between x and y.  All weights w are non negative integers smaller than 1000.  There is one whitespace between each integer on each line.

### Sample Input:
\# This is the a graph of n = 5.<br>
\#n = 5<br>
\#<br>
1 2 1<br>1 3 3<br>1 4 4<br>1 5 5<br>2 1 1<br>2 3 2<br>3 1 3<br>3 2 2<br>4 1 4<br>5 1 5<br>

You should output the weight of the minimum spanning tree, i.e.  the sum of weights given to each edgeof the spanning tree as follows:
### Sample Output:
12