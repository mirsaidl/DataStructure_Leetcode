def linear_search(data, item):
    n = len(data)
    k = 0
    loc = 0
    for k in range(n):
        if item == data[k]:
            loc = k
            k = k + 1
    if loc == 0:
        print('Item not found')
    else:
        print(f'{loc+1} is location of {item}')

if __name__ == "__main__":
    data = [13,31,17,53,42]
    linear_search(data, 53)


        