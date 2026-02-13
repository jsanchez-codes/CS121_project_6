# CS121_project_6
(lab) file IO

# File IO "data.csv" Pseudocode

## main()

```
int main()
    input file declare name;
    create a string called currentline;
    create a stringstream for converting data;
    create a string for the first number in the line of data;
    create a string for the second number in the line of data;
    create an integer for the sum;
    create an integer for the first number;
    create an integer for the second number;
    create a string for the text in the line of data;
    
    open data.csv file;

    while loop for getline data.csv and putting it on the currentline
    
        clear stringstream converter;
        convert string in the currentline;
        
        call getline to read first variable with comma delimiter;
        call getline to read second variable with comma delimiter;
        
        call getline to read third variable;

        clear stringstream converter;
        call string num1;
        convert string num1 to int num1;

        clear stringstream converter;
        call string num2;
        convert string num2 to int num2;

        declare sum = num1 + num2;

        for loop (initialize i to 0; i less than sum; increase i by 1){
            print text;
        } // end for
        print new line;
        
        clear stringstream converter;
        clear all strings;
        
    } // end while
    
    close data.csv;

} // end main
```

