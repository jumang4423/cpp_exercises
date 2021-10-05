# compile

```bash
g++ intStr.cpp intStr_main.cpp && ./a.out
```

# expected result

```
❯ g++-11 intStr.cpp intStr_main.cpp && ./a.out
testing value: 1270174
casted string value using intToStr: 1270174
casted int value using strToInt: 1270174
-! test passed

testing value: 12345678
casted string value using intToStr: 12345678
casted int value using strToInt: 12345678
-! test passed

testing value: 32323232
casted string value using intToStr: 32323232
casted int value using strToInt: 32323232
-! test passed

testing value: -1234
casted string value using intToStr: -1234
casted int value using strToInt: -1234
-! test passed

testing value: 4423
casted string value using intToStr: 4423
casted int value using strToInt: 4423
-! test passed
```