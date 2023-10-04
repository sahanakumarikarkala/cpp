## Rules for const

### Rule 1 : 
- const keyword in applied to the `token` on its immediate left. If there is nothing to its left, const is applied to the token on its immediate right.

### Rule 2: 
- While working with pointers treat `*` symbol as a token too .

```
const int * ptr;
```