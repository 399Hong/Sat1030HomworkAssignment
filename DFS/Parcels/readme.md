# PARCELS

There are N people numbered 0 to N-1 trying to play a game of "pass the parcel".
Each person has a fixed target person to which they pass parcels: when person i
receives a parcel they pass it to person Ti. Unfortunately, they haven't managed to
form a neat circle and it's all a bit of a mess.
Given the configuration of people, we wish to make a series of Q queries. For the j-th
query, we would like to know whether a parcel given to person Aj will ever reach
person Bj, and if so, how many passes it will take.

## Input
The input will contain a description of the people's configuration and multiple queries
about that configuration.
The first line will consist of two space-separated integers N and Q, the number of
people and the number of queries (2 ≤ N ≤ 100,000, 1 ≤ Q ≤ 100,000).
The second line will consist of N space-separated integers T0, ..., TN-1, the targets of
the people (0 ≤ Ti ≤ N-1, Ti ≠ i).
Each of the following Q lines will describe a query. The j-th of these lines will consist
of two space-separated integers Aj and Bj (0 ≤ Aj ≤ N-1, 0 ≤ Bj ≤ N-1, Aj ≠ Bj).
## Output
Output one line for each query. On the j-th line, output the number of times a parcel
given to person Aj will be passed until it reaches person Bj, or -1 if the parcel will
never reach person Bj.<br>
**Sample Input**
<br>
5 2<br>
1 0 1 4 3<br>
2 0<br>
3 1<br>
**Output for Sample Input**<br>
2<br>
-1<br>
## Explanation
For the first query, if person 2 is given a parcel they will pass it to person 1 who will
then pass it to person 0 (taking two passes).
For the second query, if person 3 is given a parcel they will pass it to person 4 who
will then pass it back to person 3. This will repeat forever and the parcel will never
reach person 1.
