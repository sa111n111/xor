# xor

```c
int main() {
    char key[] = {"sally"};
    
    char* enc = XOR("GO TO JAIL", key); // 4.L8<A&-:-
   
   // works the same for decoding:
   // char* enc = XOR("4.L8<A&-:-", key);
    
    printf("%s", enc);
    return 0;
}
```
