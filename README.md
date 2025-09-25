# CS121_Project_5_Beck
## (lab) file IO

```
Initialize file pointer and stringstream
Intialize string word
Intialize ints numA, numB, and sum
```

### main()
```
set keepGoing to true
while keepGoing equals true:
    call getLine()
    if at end of file:
        set keepGoing to false
    else:
        add numA and numB and store it in sum
        for sum times:
            print word
```

### getline()
```
Open up the data file in a loop to read the file one line at a time
    for each line in the data file:
        set the first number to int numA
        set the second number to int numB
        set the word to string word
return int numA and numB and string word
```