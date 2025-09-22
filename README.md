# CS121_Project_5_Beck
## (lab) file IO

```
Initialize file pointer and stringstream
Intialize strings word, numA, and numB
Intialize ints num1, num2, and sum
```

### main()
```
call getLine()
for each line in the data file:
    convert string numA and numB into int num1 and num2
    add num1 and num2 and store it in sum
    for sum times:
        print word
```

### getline()
```
Open up the data file in a loop to read the file one line at a time
    for each line in the data file:
        set the first number to string numA
        set the second number to string numB
        set the word to string word
return string numA, numB, word
```