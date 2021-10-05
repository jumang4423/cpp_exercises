# compiling

```bash
g++ binomialPMF.cpp binomialPMF_main.cpp && ./a.out
```

# expected result
```
❯ g++ binomialPMF.cpp binomialPMF_main.cpp && ./a.out
n: 5
p: 0.25
k: 1
expected_value: 0.395508
return value from binomialPMF: 0.395508
-! test passed

n: 5
p: 0.25
k: 2
expected_value: 0.263672
return value from binomialPMF: 0.263672
-! test passed

n: 25
p: 0.25
k: 2
expected_value: 0.0250848
return value from binomialPMF: 0.0250848
-! test passed

n: 25
p: 0.25
k: 10
expected_value: 0.0416584
return value from binomialPMF: 0.0416584
-! test passed

n: 25
p: 0.25
k: 15
expected_value: 0.000171434
return value from binomialPMF: 0.000171434
-! test passed
```