<!--
 * @Date        : 2020-05-22 20:04:30
 * @LastEditors : anlzou
 * @Github      : https://github.com/anlzou
 * @LastEditTime: 2020-11-09 19:55:48
 * @FilePath    : \data-structure\chapters\chapter07-trees-and-binary-trees\test-2.md
 * @Describe    : 
--> 

## 题目地址
7.1 验证性实验

## 题目描述
实验题 2：实现二叉树各种遍历算法

目的：
```
领会二叉树各种遍历过程以及遍历算法设计
```
目录：
```java
preOrderRecu(BTNode *b)     //二叉树b的先序遍历的递归算法

preOrderUnre(BTNode *b)     //二叉树b的先序遍历的非递归算法

inOrderRecu(BTNode *b)      //二叉树b的中序遍历的递归算法

inorderUnre(BTNode *b)      //二叉树b的中序遍历的非递归算法

postOrderRecu(BTNode *b)    //二叉树b的后序遍历的递归算法

postOrderUnre(BTNode *b)    //二叉树b的后序遍历的非递归算法

travLevel(BTNode *b)        //二叉树b的层次遍历算法
```

## 二叉树遍历的概念
一颗二叉树由3部分（即根结点、左子树和右子树）构成，可以从任何部分开始遍历，所以有3！（即6）种遍历方法。若规定子树的遍历总是先左后右（先右后左与之对称），则对于非空二叉树，可得到以下3种递归的遍历方法，即先序遍历、中序遍历和后序遍历。另外还有一种常见的层次遍历方法。

### 先序遍历(preorder traversal)
1. 访问根结点
2. 先序遍历左子树
3. 先序遍历右子树

### 中序遍历(inorder traversal)
1. 中序遍历左子树
2. 访问根结点
3. 中序遍历右子树

### 后序遍历(postorder traversal)
1. 后序遍历左子树
2. 后序遍历右子树
3. 访问根结点

### 层次遍历(level traversal)
不同于前面3种遍历方法，它是非递归的

1. 访问根结点（第 1 层）
2. 从左到右访问第 2 层的所有结点
3. 从左到右访问第 3 层的所有结点、......、第 h 层的所有结点

## 思路：
#先序非递归

先序遍历：先访问根结点，再遍历左子树，最后遍历右子树。由于在二叉树链中左、右子树是通过根结点的指针指向的，在访问根结点后遍历左子树时会丢失右子树的地址，需要使用一个栈来临时保存左、右子树的地址。

#中序非递归、后序遍历

......

#层次遍历

在进行层次遍历时，对某个结点访问完后，再按照它的左、右孩子顺序进行同样的处理，这样一层一层进行。先访问结点的左、右孩子也要先访问，这样与队列的特征相吻合。因此层次遍历算法采用一个环形队列qu来实现。


## 代码
>- [node.h](./code/struct/node.h)
>- [exp7-1.cpp](./code/exp7-1.cpp)
>>- [exp7-2.cpp](./code/exp7-2.cpp)
>>- [tes2.cpp](./code/test2.cpp)

## 复杂度分析

- 时间复杂度：O( )
- 空间复杂度：O( )