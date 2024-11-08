# How does a tower defense game works?

1. There's a map where you can put your tower and enemies come from
    ## How to do a map?
2. The map is basically a board so is just a 2D array.
    ## How to can the enemies walk through the map?
3. Let's suppose that the board is a  5x5 array, so:
[
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
]
and the enemy start a 2, 0 (enemy represented as a E)
[
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [E, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
]
and now the path he needs to take is a up and a right move
[
    [0, 0, 0, 0, 0],
    [E, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
]
so now he's at 1, 0
[
    [0, 0, 0, 0, 0],
    [0, E, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
]
and now he's at 1, 1.
So to make it move you need to change the position in the array he's at

