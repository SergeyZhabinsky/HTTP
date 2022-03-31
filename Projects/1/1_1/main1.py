def convert(x):
    retValue = 0
    try:
        retValue = int(x)
    except ValueError as err:
        print(x, " - не является числом.")

    return retValue




def put():
    xx = "ERR"
    try:
        x = input("введите значение: ")
        if not x:
            xx = x
        else:
            xx = int(x)
    except ValueError as err:
        pass
    return xx

if __name__ == '__main__':

    list = []   # все введённые числа
    sum = None  # сумма всех чисел
    min = None  # минимальное число
    max = None  # максимальное число
    average = None  # среднее значение

    # list.append(6)
    while True:
        val = put()
        if val and val != "ERR":
            list.append(val)
        elif not val:
            break
        else: pass

    print("Все введённые числа: ", list)

    x = 0
    for a in list:
        x += a
        # print(a)
    print("Сумма всех чисел: ", x)
    print("Среднее число: ", x / len(list))

    x = None
    for a in list:
        if x is None or a<x:
            x=a

    print("Минимальное число: ", x)

    x = None
    for a in list:
        if x is None or a>x:
            x=a
    print("Максимальное число: ", x)

    # count = 0
    # sum = 0
    # while True:
    #     x = input("Введите число: ")
    #     if x:
    #         sum += convert(x)
    #         count += 1
    #     else:
    #         break
    #
    # print("Вы набрали число ", sum, " за ", count, " проходов.")