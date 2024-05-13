def taratara(scores):
    sum = 0
    index = len(scores)
    for score in scores:
        sum = sum + score
    return round(sum/index)

a = [1,2,6,9,10,5]
print(taratara(a))

#6