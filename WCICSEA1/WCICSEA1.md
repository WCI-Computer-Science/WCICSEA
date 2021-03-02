__Please solve the following problem, and give a proof and time complexity analysis of your solution. Make sure to explain why you used the approach you used, and why it’s correct.__

You’re the brave commander of the WCI Exploration Club, and you’ve found yourself in the Indonesian archipelago searching for a long-lost treasure.
You’ve done careful scouting, and have a map of all _N_ of the islands. Much of the waters here are too dangerous to traverse,
but there are _M_ possible routes from one island to another, each taking a different amount of time to travel through.
These routes have strong currents, so you can only travel in one direction.
Note that it might be possible that there are two different routes going in either direction between two islands,
in which case you may travel bidirectionally between them.
You will start at island _1_ and your treasure lies at island _N_.

You must be careful though, as the area is a protected wildlife sanctuary and contains endangered species.
By travelling too quickly, you will run over many of these species!
The local government is on the lookout for speeders, so if you take the shortest path from _1_ to _N_,
or any other path that takes the same time as the shortest path, you will be arrested.

Additionally, some routes are scarier than others.
Each route has a scariness score, and the scariness score of your entire path is the sum of the scariness score of each individual route.
You should choose a path with the smallest scariness score possible given the above constraints.

Input Specification:
The first line of input will contain the integers _N_, _M_
For the following _M_ lines of input, the ith line will contain the integers _A<sub>i</sub>_, _B<sub>i</sub>_, _T<sub>i</sub>_, _S<sub>i</sub>_.
This will indicate a route from _A<sub>i</sub>_ to _B<sub>i</sub>_ taking _T<sub>i</sub>_ minutes and a scariness score of _S<sub>i</sub>_.

For all inputs,

1 ≤ _N_ ≤ 10000

1 ≤ _M_ ≤ 20000

1 ≤ _A<sub>i</sub>_, _B<sub>i</sub>_ ≤ _N_

1 ≤ _T_ ≤ 100

1 ≤ _S_ ≤ 100

Output Specification:
The only line of output should be two space-separated integers, _X_ and _Y_, where _X_ is the time that you should take to reach the treasure,
and _Y_ is the scariness score.

Sample Input:
```
5 8
1 5 20 100
1 2 2 10
1 4 18 90
2 3 2 10
3 4 2 10
4 5 2 10
```
Sample Output:
```
20 100
```
Sample Program (for a Hello World! program in python):
```python
print("Hello World!") # The problem asks us to output Hello World!, with the H and W capitalized, and an exclamation mark at the end. Let's do that.
# This program doesn't repeat, so it will always take O(1) time.
```
