def kali(x,y):
    my_list = []
    for i in range(1,y+1):
        if i % x == 0 :
            my_list.append(i)
    return my_list

print(kali(3,15))

#[3, 6, 9, 12, 15]