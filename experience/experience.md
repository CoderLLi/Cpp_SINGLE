#�ܽ�
##�ж��Ƿ�Ϊ�����ĺ������Ž�
```c++
bool isprime(int a) {
    for (int i = 2; i * i <= a; i++)
        if(a % i == 0) return false;
    return true;
}
```
�ص�Ϊ==i * i <= a==���Դ���Ƚ���ʱ�临�Ӷȡ�
##c++�е�==vector==
vector�������������������洢�����Ķ���for example
```c++
vector<int> v[5];
vector<int> v;
```
==�ǳ�����==