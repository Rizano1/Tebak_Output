def cipherPol(text):
  text_list = []
  for char in text:
    text_list.append(char)
  for i in range(len(text_list)):
     if text_list[i].isalpha():
        text_list[i] = 0
     else:
        text_list[i] = 1
  return "".join(str(x) for x in text_list)

print(cipherPol("MAGEX?? DIM4NA??!?"))

#000001110001001111