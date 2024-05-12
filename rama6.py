def kotak_mage(x,y,z):
   temp = 0
   board = [
      [101010,902391,123012],
      [123082,999999,123124],
      [375472,780978,101010]
   ]
   if board[x][x] == board[z][z]:
      syarat_satu = True
   if board[x][y] > board[y][x]:
      syarat_dua = True
   for a in range(0,3):
      for b in range(0,3):
         if board[y][y] != board[a][b]:
            temp += 1
   if temp == 8:
      syarat_tiga = True

   if syarat_satu and syarat_dua and syarat_tiga == True:
      return True
   else:
      return False

print(kotak_mage(0,1,2))

#True