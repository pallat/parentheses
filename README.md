Some chalenge for fun krub. 
Anyone can try krub. I would like to have algorithm to validate the below condition:

Input: some long string
Validation: If the string has the character = '{', it should be follow by '}'. This means that if the string has either '{' or '}', they shall be together '{}'.

Some sample
string: xxxxxxxxxxx{}xxxxxxxxxxxxxxx
result:  pass
string: xxxxxxxxxxx{}xxxxxxx{}xxxxx
result:  pass
string: xxxxxxxxxxx{x}xxxxxxxxxxxxxxx
result:  fail
string: xxxxxxxxxxx}{xxxxxxxxxxxxxxx
result:  fail
string: {xxxxxxxxxxxxxxx
result:  fail
string: xxxxxxxxxxxxxxx}x
result:  fail

Limitaion:
- Cannot use replace command 
- BigO < N 
- For/While loop each character is too easy for us

This algorithm will be used in our SMS project :)

Due date: 23 Mar 18