const iniApa = [45, 77, 65, 71, 92, 69];
let i = 1;
let j = 1;
while (i < iniApa.length) {
  process.stdout.write(String.fromCharCode(iniApa[i]))
  i = i + j;
  j = i - j;
}

// output: MAGE