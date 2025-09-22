# CS121_Project_5_Beck
## (lab) file IO

```
Initialize file pointer, stringstream, string word, string numberA, string numberB, int num1, int num2, int sum, and int i
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
        set the second number to string numbB
        set the word to string word
return string numA, numB, word
```