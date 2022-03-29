# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.

def convert(tp):
    b=3
    print(int(tp)+b+2000)




def print_hi(name):
    print(name)
    print( type(name) )


#----------------------------------------------------
if __name__ == '__main__':
    x_tuple = ('1', 2, "3")
    x_list = ['5', 6, "7"]
    x_list1 = ['5', 6, "7"]
    x_set = {'5', 6, "7"}
    # print_hi( x_tuple )
    # print_hi( x_list )
    # print_hi( x_set )
    # x_set.append("1--value_")
    # convert("15")
    # print_hi( x_set )
    # a = "V1"
    # b = "V2"
    # c = "V1"
    #
    # v = int(4) > 6
    # print_hi( v )
    #
    # print_hi(10/3)

    x = input("enter word: ")

    print_hi( x_list )
    x_list += [x]
    print_hi( x_list )
    x_list.append(x)
    print_hi( x_list )

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
