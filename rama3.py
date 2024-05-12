def halo(nama,time):
   if time == "morning":
      return "Good Morning " + nama
   elif time == "afternoon":
      return "Good Afternoon " + nama
   elif time == "night":
      return "Good Night " + nama
   else:
      return "Hello, " + nama

nama_aku = "Budi"
waktu_ini = "Siang"
print(halo(nama_aku,waktu_ini))

#Hello, Budi