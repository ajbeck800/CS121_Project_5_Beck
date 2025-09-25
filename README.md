# CS121_Project_5_Beck
## (lab) file IO

### main()
```
Open up data.csv in a loop to read the file one line at a time
    for each line in data.csv:
        read in the line, put in currentLine
        put currentLine in a stringstream
        use getLine to get the first number, put it in string sNumA
        convert to int numA
        use getLine to get the second number, put it in string sNumB
        convert to int numB
        set the word to string word
        add numA and numB and store it in int sum
        for sum times:
            print word
```