def angka_cinta(sentence, unique_word):
    sum = 0
    sentence_lower = sentence.lower()
    words = sentence_lower.split()
    for word in words:
        if word == unique_word:
            sum = sum + 1
    return sum

word = "I love you but i love MAGEX more !"
print(angka_cinta(word,"love"))

#2