Raymond and Jasmine take turns playing a game, with Raymond starting first.

Initially, there is a number n on the chalkboard. On each player's turn, that player makes a move consisting of:

    Choosing any x with 0 < x < n and n % x == 0.
    Replacing the number n on the chalkboard with n - x.
    Also, if a player cannot make a move, they lose the game.

Return true iff Raymond wins the game, assuming both players play optimally.


Example 1:

    Input: n = 2
    Output: true
    Explanation: R chooses 1, and J has no more moves.

Example 2:

    Input: n = 3
    Output: false
    Explanation: R chooses 1, J chooses 1, and R has no more moves.