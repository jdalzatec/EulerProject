def reduce_grid(grid):
    if len(grid) == 1:
        return max(grid[0])
    
    level = grid[0]
    sublevel = grid[1]
    for i in range(-1, len(level)):
        if i < 0:
            val = 0
        else:
            val = level[i]
        comparative = level[i + 1] if (i + 1) < len(level) else 0

        sublevel[i + 1] += max(val, comparative)

    del grid[0]
    return reduce_grid(grid)


def main():
    grid = []
    with open("data.dat") as file:
        lines = file.readlines()
        for line in lines:
            line = list(map(int, line.rsplit()))
            grid.append(line)


    value = reduce_grid(grid)
    print(value)
    

if __name__ == '__main__':
    main()