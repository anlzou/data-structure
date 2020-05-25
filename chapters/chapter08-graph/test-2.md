<!--
 * @Date        : 2020-05-21 17:12:42
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-05-25 23:14:08
 * @FilePath    : \data-structure\chapters\chapter08-graph\test-2.md
 * @Describe    : 
--> 

## 题目地址
8.1 验证性实验

## 题目描述
实验题 2：实现图的遍历算法

目的：
```
领会图的两种遍历算法
```
函数：
```java
DFSrecu(G, v)   	//以递归的方法从顶点 v 深度优先遍历图 G

DFSunre(G, v)       //以非递归的方法从顶点 v 深度优先遍历图 G

BFS(G, v)   		//从顶点 v 广度优先遍历图 G
```

## 思路
DFSunre(G, v)算法的伪代码思路如下：
```java
栈 St 初始化，visited 数组所有元素初始化为 0 ;
访问顶点 v，visited[v] = 1; 顶点 v 进栈 St ;
while(栈 St 非空){
	取 St 的栈顶顶点 x(不退栈);
	取顶点 x 的第一个相邻点;
	while(顶点 x 存在相邻点 w){
		if(顶点 w 没有访问过){
			访问顶点 w 并置 visited[w] = 1;
			将顶点 w 退栈;
			break;
		}
		继续找到 x 的其他相邻点;
	}
	if(顶点 x 没有其他相邻点) 将 x 退栈;
}
```

## 代码
- [exp8-2.cpp](./code/exp8-2.cpp)
- [test2.cpp](./code/test2.cpp)

## 复杂度分析

- 时间复杂度：O( )
- 空间复杂度：O( )