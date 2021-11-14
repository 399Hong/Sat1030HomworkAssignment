We would like you to implement
the Gale-Shapley algorithm for finding the man-optimal stable maching. An O(n2) solution is preferred.

We use # for the comment and we have e.g. n = 5 to indicate the value n of our stable matching
problem. We use all odd integers ranging from 1 to 2n-1 as the man ID, and all even integers ranging
from 2 to 2n as the woman ID. There is a whitespace after #, n, =, : to make the parsing process easily.
The preference for each person ID comes after the colon : (no whitespace between person ID and the
colon). There is a whitespace between each integer on the preference list. For example, 1: 2 6 8 4 10
means that the man ID 1 has the preference list f2; 6; 8; 4; 10g where his best choice is 2 and worst
choice is 10.
You should output the matching pair, starting from the man ID 1 to the man ID 2n-1. The matching
format is m w where m is the man ID and w is the woman ID. Note that there is one whitespace
between m and w in the output format.


# Sample Input:
\#\

\#\
n = 5\
\#

1: 2 6 8 4 10

2: 5 9 3 1 7

3: 6 8 10 4 2

4: 3 9 7 5 1

5: 2 6 8 10 4

6: 7 3 9 5 1

7: 10 8 4 6 2

8: 5 7 1 3 9

9: 2 4 6 10 8

10: 5 9 7 3 1


# Sample output

1 8

3 6

5 2

7 10

9 4
