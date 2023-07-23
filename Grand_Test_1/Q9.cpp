/*
    You will be given a maze in the form of a matrix like:

    XXXOXXX
    XXXOXXX
    XXXOXXX
    OOOOOOO
    XXXOXXX
    XXXOXXX
    XXXOXXX

    Where X represents a wall and O represents a path.
    The maze will always have 7 rows and 7 columns. You have to find that if starting
    from the point (3, 3), can you reach the point (0, 3), (6, 3), (3, 0), (3, 6) or not.
    If you can reach the point, print "Yes" and if you can't, print "No".
    You can only move in the four directions: up, down, left and right.
    You can't move diagonally.
    You can't move through the walls.
    You can't move outside the maze.
    Hint: Take a 2d matrix to store the maze and then use nested loops to traverse the
    4 directions starting from matrix[3][3].

    You can use these sample inputs:
    XXXOXXX
    XXXOXXX
    XXXOXXX
    OOOOOOO
    XXXOXXX
    XXXOXXX
    XXXOXXX
    Output: Yes
    Explaination: You can reach all the points.

    XXXXXXX
    XXXXXXX
    XXXXXXX
    XXXOXXX
    XXXOXXX
    XXXOXXX
    XXXXXXX
    Output: No
    Explaination: You can't reach (0, 3), (6, 3), (3, 0), (3, 6).

    XXXXXXX
    XXXXXXX
    XXXXXXX
    XXXOXXX
    XXXOXXX
    XXXOXXX
    XXXOXXX
    Output: Yes
    Explaination: You can reach (6, 3).


*/