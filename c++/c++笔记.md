# c++笔记

## 数据结构

### 1.数组

#### 创建数组

```c++
vector<type> containerName;
```

#### 定义数组的元素

可以使用

Ⅰresize函数定义

```c++
containerName.resize(n,m);
```

其中n为元素的个数,m为元素本身。若只有一个参数，产生长度为n的全为0的数组

Ⅱ 直接定义

```c++
vector<type> containerName={num1,num2...};
```

Ⅲ vector参数定义

```c++
vector<type> containerName(n,m);
```

该方法类似于resize

Ⅳ 利用另一数组定义

```c++
vector<type> containerName1(containerName2);
```

#### 二维数组

定义类似于一维数组，就是type改成数组

#### 获取数组元素

使用下标索引访问

```c++
vector<type> containers={container1,container2,...};
container=containers[i]//i为索引
```

