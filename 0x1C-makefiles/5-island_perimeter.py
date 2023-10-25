#!/usr/bin/python3
"""Island perimeter"""


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""
    pm = 0
    for row in range(len(grid)):
        for clm in range(len(grid[0])):
            if grid[row][clm] == 1:
                if row == 0 or grid[row - 1][clm] == 0:
                    pm += 1
                if row == (len(grid) - 1) or grid[row + 1][clm] == 0:
                    pm += 1
                if clm == 0 or grid[row][clm - 1] == 0:
                    pm += 1
                if clm == (len(grid[0]) - 1) or grid[row][clm + 1] == 0:
                    pm += 1

    return pm
