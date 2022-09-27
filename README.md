## Binary Converter
This is a C application that can compute a decimal value from a binary number
just insert the number you want to convert, and press ENTER, simple as that, than you'll get the decimal value from the number you entered.
### How to check if the value is correct?
So, to convert a binary valeu to a decimal, you start by get the number and multiplying by 2ⁿ with a power relative to it's position, and sum the others numbers for example:

    10001 ->
    
    1.2⁴ + 0.2³ + 0.2²+ 0.2¹ + 1.2⁰ =
    1.16 + 0.8 + 0.4 + 0.2 + 1.1 =
    16+0+0+0+1 = 17
    
    so 10001 is 17 in decimal
    
If you don't want to calculate by hand you can use others calculators, i recommend this one [Binary Calculator (Binary to Decimal)](https://www.rapidtables.com/convert/number/binary-to-decimal.html) beacuse this one shows the process behind.

#### But how to convert Decimal back to binary ?
So, to solve this problem i've made another program, which does the oposite of this one does, here's the link:  [BinaryConversor by JaaumG](https://github.com/JaaumG/BinaryConversor)
