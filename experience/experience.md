#总结
##判断是否为质数的函数最优解
```c++
bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if(a % i == 0) return false;
    return true;
}
```
重点为==i * i <= a==可以大幅度降低时间复杂度。
##c++中的==vector==
vector类似于数组可以在里面存储大量的东西for example
```c++
vector<int> v[5];
vector<int> v;
```
==非常好用==