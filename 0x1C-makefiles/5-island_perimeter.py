#!/usr/bin/python3
"""Island Perimeter"""


def valid_cell(grid, x, y):
    """Checks if a cell is on the grid"""
    return x >= 0 and x < len(grid) and y >= 0 and y < len(grid[0])


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    if not grid or not any(row for row in grid):
        return None
    if not any(x in (0, 1) for row in grid for x in row):
        return None
    perimeter = 0
    deltas = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                borders = 4
                for dt in deltas:
                    x, y = i+dt[0], j+dt[1]
                    if valid_cell(grid, x, y) and grid[x][y] == 1:
                        borders -= 1
                perimeter += borders
    return perimeter
