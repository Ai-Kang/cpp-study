# C语言基础

# 创建文件并编译

```c
// 创建Main.c文件
// 引入标准头文件
#include
<stdio.h>

int main() {
printf("%s", "Hello world");
return 0;
}
```

## 编译文件

```shell
gcc Main.c # 得到a.exe
gcc Main.c -o Main.exe # 得到Main.exe
```

# 变量

```c
// 引入标准头文件
#include
<stdio.h>

int main() {
// 定义变量
int a;
a = 20;
// 定义变量并赋值
int b = 10;
// 参与计算
int c = a + b;
return 0;
}
```

# 数据类型

```c
short                           2字节
int                             4字节
long                            4 or 8字节
long long(C99新类型)             8字节
long double					双精度浮点型 12个字节
float                           4字节                    
double                          8字节
long double                     8 or 16字节
char                            1字节
sizeof(数据或数据类型)             查询数据字节数量
unsigned                        无符号
signed                          有符号(默认)
_Bool				布尔类型
void				 空类型
size_t			获取数据类型对应字节,size_t实际就是long long

构造数据类型：
    [] // 数组
    struct // 结构体
    union // 联合体
    enum  // 枚举
```

# 标识符

```text
1：由数字、字母、下划线组成
2：不能使用数字开头
3：不能是关键字
4：区分大小写
5：变量名全部小写驼峰命名或下划线命名
```

# 转义字符
```c
\n 换行
\0 字符串结束标志
\? 在书写连续多问号时防止被解析成三个字母
\' 用域表示字符常量
\" 字符串内的双引号
\\ 转义斜杠
\a 警告子u发，蜂鸣
\b 退格符
\f 进纸符
\r 回车
\t 水平制表符
\v 垂直制表符
\ddd 表示1~3个8进制数字 \123 表示8进制的123
\xdd 表示2个16进制数字 \x36 表示16进制的36
```

# 标准输入输出

## 输出 printf

```c
整形           %d
长整形         %ld
超长整形       %lld
无符号         %u
浮点数         %f
double        %lf
府县属控制小数位 %.2f
字符           %c
字符串         %s
sizeof的大小   %zu

%a: 浮点数(c99有效)
%A: 浮点数(c99有效)
%c: 字符打印
%d: 十进制整数打印
%e: 科学计数法浮点数，指数e
%E: 科学计数法浮点数，指数E
%i: 整数,等同于%d
%f: 浮点数
%g: 六个有效数字的浮点数,整数部分一旦超过六位就会自动转换科学计数法，指数e小写
%G: 六个有效数字的浮点数,整数部分一旦超过六位就会自动转换科学计数法，指数E大写
%hd: 十进制 short int类型
%ho: 八进制 short int类型
%hx: 十六进制 short int类型
%hu: unsigned short int类型
%ld: 十进制整数
%lo: 八进制long int类型
%lx: 十六进制long int类型
%lu: unsigned long int类型
%lld: 十进制 long long int类型
%llx: 八进制 long long int类型
%llx: 十六进制 long long int类型
%llu: unsigned long long int类型
%le: 科学计数法表示的long double类型浮点数
%lf: 十进制浮点数
%n: 已输出的字符串数量,该占位符本身不输出,只是将值存储在指定变量中
%o: 八进制整数
%p: 指针
%s: 字符串
%u: 十进制无符号整数
%x: 十六进制整数
%zd: size_t类型
%%: 输出一个百分号
printf("%d",123);
```

## 输入 scanf
```c
// 引入标准头文件
#include <stdio.h>

int main() {
    // 键盘录入
    int a;
    printf("%s","请输入一个整数");
    scanf("%d", &a);
    printf("你输入的数字是：%d\n", a);
    printf("你的名字是：");
    char name[20];
    scanf("%s",name);
    printf("你的名字是：%s\n",name);
    return 0;
}
```
# 运算符
```c
算数运算符               +   -   *   /   %
自增自减运算符            ++   --
赋值运算符               =   +=  -=  *=  /=  %=
关系运算符               ==  !=  >   >=  <   <=
逻辑运算符               !   &&  ||
三元运算符                a > b ? a : b
```
# 分支结构
## if分支语句
```c
if(判断语句) {
    // 代码体
}else if(判断语句){
    // 代码体
}else{
    // 都不满足是执行
}
```
## switch语句
```c
switch (条件控制变量){
    case 判断1:
        语句
        break;
    case 判断2:
        语句
        break;
    case 判断3:
        语句
        break;
    default:
        所有匹配不上走这里;
        break;
}
// 如果不是用break则会继续向下执行
```
# 循环结构
```c
continue; 跳过一次循环
break; 结束当前循环
return; 结束方法
```
## for
```c
for(初始化语句;条件判断语句;循环操作){
    // 循环体
}
```
## while
```c
while(条件判断语句){
    // 循环体
}
```
## do..while 先执行再判断
```c
do {
    // 循环体
}while(条件判断);
```
## goto
```c
// 引入标准头文件
#include <stdio.h>

int main() {
    for (int i = 0; i < 10; ++i) {
        if(i == 5){
            goto a;
        }
        printf("%d\n",i);
    }
    a: 
        printf("结束了");
    return 0;
}
```
# 常用关键字
```c
控制语句关键字：
	break // 跳出循环
    case // 类似if
    continue // 跳出本次循环
	default // 默认
	do // 和while一起使用
	while // 循环
	if // 分支语句
	else // 分支语句
	for // 循环
	switch // 分支语句
	goto // 实现跳转
	return // 返回
数据类型关键字：
	char
	short
	int
	long
	float
	double
	signed // 有符号整型的声明
	unsigned // 无符号整型的声明
	enum // 枚举
	struct // 结构体
	union // 联合体(共用体)
	void // 无
存储类型关键字：
	auto // 自动
	extern // 声明外部符号
	register // 寄存器，被修饰变量建议优先存入寄存器
	static // 静态的，可以修饰局部变量、全局变量、函数，被定义为静态后会改变存储位置，会存入静态区，并且不能被其它文件使用（内部链接属性）
其它关键字：
	const // 修饰常量
	sizeof // 计算大小
	typedef // 类型重命名
	volatile
C99增加关键字：
	inline
	restrict
	_Bool
	_Complex
	_Imaginary
C11增加关键字：
	_Alignas
	_Alignof
	_Atomic
	_Static_assert
	_Noreturn
	_Thread_local
	_Generic
```
# 数组
```c
/**
 * 数组
 * @return
 */
int main() {
    // 数组的定义1
    int arr1[10];
    // 素组的定义2
    int arr2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // 数组的定义3
    int arr3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // 数组赋值和使用
    arr1[0] = 0;
    //计算数组容量
    printf("array size:%llu", sizeof(arr1) / sizeof(int));
    return 0;
}

/**
 * 数组指针
 */
int main() {
    // 该指针的指向是a的地址
    const char *strp = "abcdef";
    // 打印字符串
    printf("%s\n", strp);
    // 定义两个数组
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 0};
    // 定义指针数组
    int *parr[] = {arr1, arr2};
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 5; ++j) {
            printf("%d", parr[i][j]);
        }
        printf("\n");
    }
    printf("%ul\n",arr2);
    printf("%ul\n",&arr2);
}
```

# 指针
```C
int main() {
    //定义数据
    int a = 10;
    // 定义指针
    int *pa = &a;
    // 使用指针修改值
    *pa = 20;
    // 定义数组
    int arr[3][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 0},
            {1, 2, 3, 4, 5}
    };
    // 获取arr的首元素地址
    printf("%p\n", arr); // 000000000061FDD0
    printf("%p\n", &arr[0]); // 000000000061FDD0
    // 获取arr地址
    printf("%p\n", &arr); // 000000000061FDD0
    return 0;
}
```
# 函数
```c
#include <stdio.h>

/**
 * 无参无返回
 */
void add(){
}
/**
 * 有参无返回
 */
void add(int a,int b){
}
/**
 * 有参有返回
 */
int add(int a,int b){
}
/**
 * 可变参数
 */
int add(int * count,...){
}
/**
 * 函数指针
 * @param count
 */
void test1(int count) {
    printf("%d\n", count);
}
int main() {
    void (*test1p)(int) = &test1;
    test1p(1);
    (*test1p)(10);
}
/**
  * extern 导入外部文件方法
  * static 不允许外部文件使用
 */

// 不支持嵌套定义
// 不支持重载(重名)
```

# 字符串
```c
#include <stdio.h>
#include <string.h>

/**
 * 使用strlen需要引入string.h
 * @return
 */
int main() {
    // char 字符类型
    char ch = 'w';
    // 字符串,结束标识\0 
    char *chs = "abcdef"; // 只读
    char arr[] = "asdfg";
    // 这种定义不存在\0，并且使用时会一直向后找直到找到\0
    char arr1[] = {'a','b','c','d'};
    printf("%s\n",chs);
    printf("%s\n",arr);
    printf("%s\n",arr1);
    // 获取字符串长度函数 chs len: 6
    printf("chs len: %d\n", strlen(chs));
    // arr len: 5
    printf("arr len: %d\n",strlen(arr));
    // arr1 len: 9
    printf("arr1 len: %d\n",strlen(arr1));
}
```


# string常用函数 <string.h>
```C
int strlen(str)     获取字符串长度，不计算结束标记
strcat(str1,str2)    连接字符串,str1 += str2,第个参数必须已经分配好可用空间
strcpy(str1,str2)    复制字符串 str1 = str2，从第一个char开始覆盖,小于时不会沿用
int strcmp(str1,str2)    比较字符串
strlwr(str)    转换为小写
strupr(str)    转换为大写
```
# 用户登录实战
```c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
	// 定义用户名
	char* username = "admin";
	char* password = "123456";
	// 提示用户输入
	printf("请输入用户名：");
	// 定义用户输入的用户名
	char  input_username[100];
	scanf("%s", input_username);
	// 提示用户输入密码
	char input_password[100];;
	printf("请输入密码：");
	// 定义用户输入的密码
	scanf("%s", input_password);

	if (strcmp(username, input_username) != 0) {
		printf("用户名错误！");
		return 0;
	}
	if (strcmp(password, input_password) != 0) {
		printf("密码错误！");
		return 0;
	}
	printf("登录成功！");
}
```

# 结构体
```c
// 定义结构体
 struct structName {
    字段类型 字段名称;
    字段类型 类型名称[长度];
} ;
typedef struct structName {
    字段类型 字段名称;
    字段类型 类型名称[长度];
} 别名;
// 别名是可选的,并且使用时不需要写struct关键字
```
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

/*
	定义在函数里：只能在函数中使用
	定义在函数外： 全局可用
*/

struct GirlFriend {
	char name[20];
	int age;
};

int main() {
	// 创建一个结构体变量
	struct GirlFriend gf1;
	// 赋值名称，不可以使用=号
	strcpy(gf1.name, "小红");
	gf1.age = 18;
	// 第二种定义方式
	struct GirlFriend gf = { "小丽", 19 };

	// 打印小红信息
	printf("小红姓名：%s\n", gf1.name);
	printf("小红年龄：%d\n", gf1.age);
}
```
## 结构体函数传参使用
```c
# define  _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

struct Students {
	char name[50];
	int age;
};

void resetStudentInfo(struct Students* stu);

int main() {
	// 创建学生1
	struct Students student1 = {"张三",23};
	// 打印初始信息
	printf("初始学生信息: {%s;%d}\n",student1.name,student1.age);
	// 调用函数修改学生信息
	resetStudentInfo(&student1);
	// 打印修改后学生信息
	printf("修改后学生信息: {%s;%d}\n", student1.name, student1.age);

	return 0;

}

/// <summary>
/// 修改学生信息
/// </summary>
/// <param name="stu"></param>
void resetStudentInfo(struct Students* stu) {
	printf("请输入新的学生姓名");
	scanf("%s",(*stu).name);
	printf("请输入新的学生年龄");
	scanf("%d", &(*stu).age);
}
```
# 共同体
```c
// 占用内存是最大的字段
union Name{
    类型 字段1;
    类型 字段2;
};
typedef union Name{
     类型 字段1;
     类型 字段2;
} 别名;
```
# 枚举
```c
#include <stdio.h>

// 定义一个枚举类型
enum Weekday {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    enum Weekday today = Wednesday;

    // 输出枚举值
    printf("Today is %d\n", today);

    if (today == Wednesday) {
        printf("It's the middle of the week!\n");
    }

    return 0;
}

enum Color {
    Red = 1,
    Green = 2,
    Blue = 4
};
```
# 动态内存分配
```c
#include <stdlib.h>
// malloc(size) 内存分配,申请连续空间
// calloc(size) 内存分配,申请空间,并初始化
// realloc(p,resize) 修改空间大小
// free(p) 释放内存
```
# 跑满内存测试
```c
# define  _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	// 定义循环计数器
	int count = 0;
	// 定义1GB大小
	int size = 1024 * 1024 * 1024;
	while (1) {
		// 申请内存
		char* p = (char*)malloc(size);
		if (p == NULL) {
			printf("内存申请失败");
			break;
		}
		// 循环计数器加1
		count++;
		// 打印地址值
		printf("申请了%d个地址,p = %p\n", count, p);
	}
	return 0;
}
```
# 文件
## 文件读取
### 字节读取
```c
# define  _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main() {
	// 打开文件 fopen(path,mode) mode: r:只读 w:只写 a:追加 rb:只读二进制 rb+:读写 wb:写二进制  ab+:追加二进制
	FILE* f = fopen("test.txt", "r");
	// 读取文件 fgetc()读取char		fgets()读取一行		 fread()读取指定长度
    int c;
    while ((c = fgetc(f)) != EOF) {
        printf("%c", c);
    }
	// 关闭文件 fclose()
	fclose(f);

	return 0;
}
```
### 按行读取
```c
# define  _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main() {
	// 打开文件 fopen(path,mode) mode: r:只读 w:只写 a:追加 rb:只读二进制 rb+:读写 wb:写二进制  ab+:追加二进制
	FILE* f = fopen("test.txt", "r");
	// 读取文件 fgetc()读取char		fgets()读取一行		 fread()读取指定长度
    char s[1024];
    while ((fgets(s,1024  ,f)) != NULL) {
        printf("%s", s);
    }
	// 关闭文件 fclose()
	fclose(f);
	return 0;
}
```
### 按长度读取
```c
# define  _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main() {
    // 打开文件 fopen(path,mode) mode: r:只读 w:只写 a:追加 rb:只读二进制 rb+:读写 wb:写二进制  ab+:追加二进制
    FILE* f = fopen("test.txt", "r");
    // 读取文件 fgetc()读取char		fgets()读取一行		 fread(arr,每个元素字节,arr长度,file)读取指定长度
    char s[1024];
    int len;
    while ((len = fread(s, 1, 1024, f)) != 0) {
        for (int i = 0; i < len; i++) {
            printf("%c", s[i]);
        }

    }
    // 关闭文件 fclose()
    fclose(f);
    return 0;
}
```
## 文件写入
### 写入char字符
```c
# define  _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main() {
    // 打开文件 fopen(path,mode) mode: r:只读 w:只写 a:追加 rb:只读二进制 rb+:读写 wb:写二进制  ab+:追加二进制
    FILE* f = fopen("test.txt", "w");
    // 读取文件 fputc()写char		fputs()写一行		 fwrite(arr,每个元素字节,arr长度,file)写指定长度
    int c = fputc('a', f);
    // 关闭文件 fclose()
    fclose(f);
    return 0;
}
### 写入一行
```c
# define  _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main() {
    // 打开文件 fopen(path,mode) mode: r:只读 w:只写 a:追加 rb:只读二进制 rb+:读写 wb:写二进制  ab+:追加二进制
    FILE* f = fopen("test.txt", "w");
    // 读取文件 fputc()写char		fputs()写一行		 fwrite(arr,每个元素字节,arr长度,file)写指定长度
   int r =  fputs("abcd", f); // 不成功返回-1
    // 关闭文件 fclose()
    fclose(f);
    return 0;
}
### 写入数组
```c
# define  _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main() {
    // 打开文件 fopen(path,mode) mode: r:只读 w:只写 a:追加 rb:只读二进制 rb+:读写 wb:写二进制  ab+:追加二进制
    FILE* f = fopen("test.txt", "w");
    char arr[] = "你好";
    // 读取文件 fputc()写char		fputs()写一行		 fwrite(arr,每个元素字节,arr长度,file)写指定长度
   int r =  fwrite(arr,3,2, f); // 不成功返回-1
    // 关闭文件 fclose()
    fclose(f);
    return 0;
}

```

# C++
## 第一个C++程序
```C++
#include <iostream>

int main() {
    std::cout << "Hello World!"  << std::endl;
    return 0;
}
```
# 数据类型
```C++
short    短整型
int       整型
long      长整型
long long  64位长整型
float     单精度浮点数
double    双精度浮点数
bool      布尔类型
char      字符类型
string    字符串类型
```
## 字符串
```c++
#include <iostream>

int main() {
    // 创建字符串
    std::string str = "Hello, World!";
    // 打印字符串大小
    std::cout << sizeof(str) << std::endl;
    return 0;
}
```
# 控制台输入
```C++
#include <iostream>

int main() {
    // 定义数字
    int n1;
    std::cout << "请输入一个数字: ";
    std::cin >> n1;
    std::cout << "你输入的数字是: " << n1 << std::endl;
    return 0;
}
```
# 宏定义
```C++
#include <iostream>

// 定义宏,走的是替换
#define NAME "张三"
int main() {
	std::cout << NAME << std::endl;

}
```

# 命名空间
## 定义命名空间
```C++
#include <iostream>

// 定义命名空间
namespace a {
	int num = 10;
	namespace aa {
		int num = 20;
	}
}

int main() {
	std::cout << a::num << std::endl;
	std::cout << a::aa::num << std::endl;

}
```
## using关键字
```C++
#include <iostream>

// 定义命名空间
namespace a {
	int num = 10;
	namespace aa {
		int num = 20;
	}
}

int main() {
	using a::num;
	using namespace a;
	std::cout << num << std::endl;
	std::cout << aa::num << std::endl;

}
```
# 分支语句
```C++
if(条件){
   // 条件成立执行
} else if(条件){
  // 条件成立执行
} else{
  // 条件不成立执行
}

switch(变量){
    case 值1:
      // 值1成立执行
      break;
    case 值2:
      // 值2成立执行
      break;
    default:
      // 默认执行
      break;
}
```
# 循环
```C++
while(条件){
    // 条件成立执行
    continue; // 跳过本次循环
    break; // 跳出循环
} 

// 执行在前条件在后
do {
    // 条件成立执行
} while(条件);

for(int i = 0; i < 10; i++){
    // 执行
}
```

# 函数
## 定义函数
```C++
返回类型  函数名(参数列表){
    // 执行
    return 返回值;
}

int add(int a, int b){
    return a + b;
}
```
## 函数默认值
```C++
int add(int a = 0, int b = 0){
    return a + b;
}
```
## 函数重载
```C++
int add(int a, int b){
    return a + b;
}

double add(int a, double b){
    return a + b;
}

int add(int a, int b, int c){
    return a + b + c;
}
```
## 函数递归
```C++
int getSum(int n){
    if(n == 1){
        return 1;
    }
    if(n <= 0){
        return 0;
    }
    return n + getSum(n - 1);
}
```
# 指针与引用
## 内存分析
```C++
栈区：存放局部变量，函数压栈
堆区：存放动态内存，new、delete，手动申请和释放
全局区：存放全局变量
代码区：存放程序编译后的二进制代码
```
## 指针
### 常量指针与指针常量
```C++
#include <iostream>

int main() {
	int a = 10;
	int b = 20;
	// const修饰在前时可以改变指针指向的地址
	const int* ap = &a;
	//*ap = 100;
	ap = &b;
	// consnt修饰在后时可以改变指针指向的值
	int* const aap = &a;
	//aap = &b;
	*aap = 100;
	return 0;
}
```
### 指针在函数中的传参
```C++
#include <iostream>

void add(int* a, int b) {
	*a = *a + b;
}

int main() {
	int a = 10;
	int b = 20;
	add(&a, b);
	std::cout << "a + b = " << a << std::endl;
	return 0;
}
```
## 引用
```C++
#include <iostream>

void add(int& a, int b) {
	a = a + b;
}

int main() {
	int a = 10;
	int b = 20;
	add(a, b);
	std::cout << "a + b = " << a << std::endl;
	return 0;
}
```
# 数组
## 定义数组
```C++
#include <iostream>

int main() {
	// 定义数组1,可能存在脏数据
	int arr1[10];
	for (int i = 0; i < 10; i++) {
		std::cout << arr1[i] << std::endl;
	}
	// 定义数组2
	int arr2[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		std::cout << arr2[i] << std::endl;
	}
	// 定义数组3
	int arr3[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++) {
		std::cout << arr3[i] << std::endl;
	}
	// 定义数组4
	int arr4[] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		std::cout << arr4[i] << std::endl;
	}
	return 0;
}
```
## 数组遍历
```C++
#include <iostream>

int main() {
	// 定义数组4
	int arr4[] = { 1,2,3,4,5 };
	// 下标遍历
	for (int i = 0; i < 5; i++) {
		std::cout << arr4[i] << std::endl;
	}
	// 增强for遍历，只有在定义元素的代码块中可用
	for (int i : arr4) {
		std::cout << i << std::endl;
	}
	return 0;
}
```
## 选择排序
```C++
#include <iostream>

/*
	选择排序
		第一个和每个一个比较，然后交换位
*/
void selectSort(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		// 记录最小下标
		int minIndex = i;
		int min = arr[i];
		for (int j = i + 1; j < len; j++) {
			// 判断比较
			if (min > arr[j]) {
				minIndex = j;
				min = arr[j];
			}
		}
		// 交换位置
		int temp = arr[i];
		arr[i] = arr[minIndex];
		arr[minIndex] = temp;
	}
}


int main() {
	// 定义数组4
	int arr4[] = { 10,6,4,5,14,435,74,34 };
	int len = sizeof(arr4) / sizeof(arr4[0]);
	selectSort(arr4, len);
	// 遍历查看
	for (size_t i = 0; i < len; i++) {
		std::cout << arr4[i] << ",";
	}
	std::cout << std::endl;
	return 0;
}
```
## 冒泡排序
```C++
#include <iostream>

/*
	冒泡排序，相连两个下标比较
*/
void bubbleSort(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		// 遍历数据	
		for (int j = 0; j < len - 1 - i; j++) { 
			if (arr[j] > arr[j + 1]) {
				// 交换元素
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


int main() {
	// 定义数组4
	int arr4[] = { 10,6,4,5,14,435,74,34 };
	int len = sizeof(arr4) / sizeof(arr4[0]);
	bubbleSort(arr4, len);
	// 遍历查看
	for (size_t i = 0; i < len; i++) {
		std::cout << arr4[i] << ",";
	}
	std::cout << std::endl;
	return 0;
}
```

# 面向对象
## 类
```C++
// 类是定义，对象是类的实现
#include <iostream>

/*
	人类的定义
		访问权限：
			private：只在当前类中可访问
			protected：当前类和子类可访问
			public：任何位置访问
*/
class Person {
public:
	// 构造函数
	Person();
	// 析构函数
	~Person();
	// 属性
	int age;
	std::string name;
	// 方法
	int getAge() {
		return this->age;
	}

private:

};

// 类外实现
Person::Person() {}

// 类外实现
Person::~Person() {}



int main() {
	// 创建对徐
	Person p1;
	p1.age = 10;
	p1.name = "张三";

	Person p2 = {};
	p2.age = 10;
	p2.name = "张三";

	Person p3 = Person();
	p3.age = 10;
	p3.name = "张三";

	Person* p4 = new Person();
	p4->age = 10;
	p4->name = "张三";

	delete p4;
	return 0;
}
```
## 静态属性
```C++
#include <iostream>

class Person {
public:
	// 类内定义类外赋值
	static int age;
	const static double PI;
private:

};
int Person::age = 10;
const double Person::PI = 3.14;

int main() {
	// 创建对徐
	Person p1;

	return 0;
}
```
## 构造函数
```C++
#include <iostream>

using namespace std;

class Person {
private:
	int age;
	string name;
public:
	Person() {
		cout << "无参构造函数执行" << endl;
	}
	Person(int age) {
		this->age = age;
		cout << "有参构造函数执行" << endl;
	}
	Person(int age, string name) {
		this->age = age;
		this->name = name;
		cout << "有参构造函数执行" << endl;
	}

};

int main() {
	// 常规调用
	Person p1 = Person();
	Person p2 = Person(10);
	Person p3 = Person(10, "张三");
	Person* p4 = new Person(10, "李四");
	// 隐式调用
	Person p5;
	Person p6 = { 10,"王五" };

	// 释放堆内存
	delete p4;
	return 0;
}
```
## explicit 关键字
```c++
// 表示无法通过隐式调用来创建对象
class Person {
private:
	int age;
	string name;
public:
	explicit Person() {
		cout << "无参构造函数执行" << endl;
	}
	Person(int age) {
		this->age = age;
		cout << "有参构造函数执行" << endl;
	}
	Person(int age, string name) {
		this->age = age;
		this->name = name;
		cout << "有参构造函数执行" << endl;
	}

};
```
## 构造函数初始化列表
```c++
#include <iostream>

using namespace std;

class Person {
public:
	int age;
	string name;
public:
	explicit Person() {
		cout << "无参构造函数执行" << endl;
	}
	explicit Person(int age, string name) : age(age), name(name) {
		cout << "有参构造函数执行" << endl;
	}

};

int main() {
	Person p3 = Person(10, "张三");
	cout << p3.age << p3.name << endl;
	return 0;
}
```

## 拷贝构造函数
```C++
#include <iostream>

using namespace std;

class Person {
public:
	int age;
	string name;
public:
	explicit Person() {}
	Person(int age, string name) : age(age), name(name) {
		cout << "有参构造函数执行" << endl;
	}
	// 拷贝构造函数
	Person(const Person& p) {
		this->age = p.age;
		this->name = p.name;
		cout << "拷贝构造函数" << endl;
	}

};

int main() {
	Person p3 = Person(10, "张三");
	Person p1 = p3;
	cout << &p3.name << endl;
	cout << &p1.name << endl;
	return 0;
}
```

## 析构函数
```C++
// 对象销毁
#include <iostream>

using namespace std;

class Person {
public:
	int age;
	string name;
public:
	explicit Person() {}
	Person(int age, string name) : age(age), name(name) {
		cout << "有参构造函数执行" << endl;
	}
	// 拷贝构造函数
	Person(const Person& p) {
		this->age = p.age;
		this->name = p.name;
		cout << "拷贝构造函数" << endl;
	}
	// 析构函数，如果是new的对象需要使用delete才会调用析构函数
	~Person() {
		cout << "对象析构了" << endl;
	}

};

int main() {
	Person p3 = Person(10, "张三");
	Person p1 = p3;
	cout << &p3.name << endl;
	cout << &p1.name << endl;
	return 0;
}
```

## 常函数
```C++
#include <iostream>

using namespace std;

class Person {
public:
	int age;
	string name;
public:
	explicit Person() {}
	Person(int age, string name) : age(age), name(name) {
		cout << "有参构造函数执行" << endl;
	}
	// 拷贝构造函数
	Person(const Person& p) {
		this->age = p.age;
		this->name = p.name;
		cout << "拷贝构造函数" << endl;
	}
	// 析构函数，如果是new的对象需要使用delete才会调用析构函数
	~Person() {
		cout << this << endl;
		cout << "对象析构了" << endl;
	}
	// 常函数
public:
	 void printAge() const {
		 // 常函数中不允许修改值，只允许调用常函数
		 //this->age = 20;
		cout << this->age << endl;
	}

};

int main() {
	Person p3 = Person(10, "张三");
	p3.printAge();
	return 0;
}

```

## 常对象
```c++
#include <iostream>

using namespace std;

class Person {
public:
	int age;
	string name;
public:
	explicit Person() {}
	Person(int age, string name) : age(age), name(name) {
		cout << "有参构造函数执行" << endl;
	}
	// 拷贝构造函数
	Person(const Person& p) {
		this->age = p.age;
		this->name = p.name;
		cout << "拷贝构造函数" << endl;
	}
	// 析构函数，如果是new的对象需要使用delete才会调用析构函数
	~Person() {
		cout << this << endl;
		cout << "对象析构了" << endl;
	}

};

int main() {
	// 对象的属性不允许修改,只能调用常函数
	const	 Person p3 = Person(10, "张三");
	//p3.age = 20;
	return 0;
}

```

## mutable 可变修饰属性，修饰的属性可以在常函数和常对象中修改
```c++
#include <iostream>

using namespace std;

class Person {
public:
	mutable int age;
	string name;
public:
	explicit Person() {}
	Person(int age, string name) : age(age), name(name) {
		cout << "有参构造函数执行" << endl;
	}
	// 拷贝构造函数
	Person(const Person& p) {
		this->age = p.age;
		this->name = p.name;
		cout << "拷贝构造函数" << endl;
	}
	// 析构函数，如果是new的对象需要使用delete才会调用析构函数
	~Person() {
		cout << this << endl;
		cout << "对象析构了" << endl;
	}

};

int main() {
	// 对象的属性不允许修改,只能调用常函数
	const	 Person p3 = Person(10, "张三");
	p3.age = 20;
	return 0;
}

```

# 友元
## 全局函数友元
```C++
#include <iostream>

// 创建类并指定友元函数
class Home {
	// 做一个友元
	friend void printBedRoom(Home* home);
private:
	std::string bedRoom = "卧室";
public:
	std::string livingRoom = "客厅";
};

// 创建一个函数访问Home的私有函数
void printBedRoom(Home* home) {
	std::cout << home->bedRoom << std::endl;
}

int main() {
	// 创建对象
	Home* home = new Home();
	printBedRoom(home);
	delete home;

	return 0;
}
```
## 类函数友元
```C++
#include <iostream>

// 定义home
class Home;

// 创建朋友类
class GoodFriend {
public:
	// 定义方法
	void printBedRoom(Home* home);
};

// 创建类并指定友元函数
class Home {
	// 做一个友元
	friend void GoodFriend::printBedRoom(Home* home);
private:
	std::string bedRoom = "卧室";
public:
	std::string livingRoom = "客厅";
};

// 类外实现方法
void GoodFriend::printBedRoom(Home* home) {
	std::cout << home->bedRoom << std::endl;
}



int main() {
	// 创建对象
	Home* home = new Home();
	GoodFriend good;
	good.printBedRoom(home);
	delete home;

	return 0;
}
```
## 友元类
```C++
#include <iostream>

class GoodFriend;
// 创建类并指定友元函数
class Home {
	// 做友元类
	friend class GoodFriend;
private:
	std::string bedRoom = "卧室";
public:
	std::string livingRoom = "客厅";
};

// 定义home
class Home;

// 创建朋友类
class GoodFriend {
public:
	// 定义方法
	void printBedRoom(Home* home) {
		std::cout << home->bedRoom << std::endl;
	}
};

int main() {
	// 创建对象
	Home* home = new Home();
	GoodFriend good;
	good.printBedRoom(home);
	delete home;

	return 0;
}
```

# 运算符重载
## 类外实现+号重载
```C++
#include <iostream>

class Point {
private:
public:
	int x;
	int y;
	Point(int x, int y) : x(x), y(y) {}
};

// 类外+重载
Point operator+(const Point& p1, const Point& p2) {
	return Point(p1.x + p2.x, p1.y + p2.y);
}

int main() {
	// 创建对象
	Point p1 = Point(10, 20);
	Point p2 = Point(1, 2);
	Point p3 = p1 + p2;
	std::cout << p3.x << ";" << p3.y << std::endl;

	return 0;
}
```
## 类内实现+号重载
```C++
#include <iostream>

class Point {
private:
public:
	int x;
	int y;
	Point(int x, int y) : x(x), y(y) {}
	// 类内+重载
	Point operator+(const Point& p2) {
		return Point(this->x + p2.x, this->y + p2.y);
	}
};

int main() {
	// 创建对象
	Point p1 = Point(10, 20);
	Point p2 = Point(1, 2);
	Point p3 = p1 + p2;
	std::cout << p1.x << ";" << p1.y << std::endl;
	std::cout << p3.x << ";" << p3.y << std::endl;

	return 0;
}
```
# 继承
```C++
#include <iostream>

/*
	父类
		public：可以在任意的位置访问
		protected：可以在当前类和子类中访问
		private：只能在当前类中访问
*/
class Animal {
private:
	int age;
	std::string name;
public:
	void walk() {
		std::cout << "Animal walk" << std::endl;
	}
	Animal() {
		std::cout << "Animal 无参构造执行" << std::endl;
	}
	Animal(int age, std::string name) : age(age), name(name) {
		std::cout << "Animal 有参构造执行" << std::endl;
	}
};

/*
	子类:
		public：保留父类权限
		protected：public会降为protected
		private：所有权限都是私有权限，默认是私有继承
*/
class Dog : public Animal {
public:
	// 子类构造函数需要在父类构造函数执行后执行，需要先执行父类初始化
	Dog() {
		std::cout << "Dog 无参构造执行" << std::endl;
	}

	Dog(int age, std::string name) :Animal(age, name) {
		std::cout << "Dog 有参构造执行" << std::endl;
	}

	void walk() {
		std::cout << "Dog walk" << std::endl;
	}

};

int main() {
	// 创建对象
	Dog* dog = new Dog();
	dog->walk();
	Dog* dog1 = new Dog(10, "ll");
	dog1->Animal::walk();
	delete dog;
	delete dog1;
	return 0;
}
```
## 虚继承
```C++
#include <iostream>

class A {
public:
	int age;
};
// 使用virtual关键字可以设置相同子类只继承父类相同属性的一份
class A1:public virtual A {
};

class A2 :public virtual A {};

class aa : public A1, public A2 {

};

int main() {

	return 0;
}
```
## 早绑定
```c++
#include <iostream>

class Animal {
public:
	int age;
	std::string name;
	void week() {
		std::cout << "Animal week" << std::endl;
	}
};

class Dog : public Animal {
public:
	void week() {
		std::cout << "Dog week" << std::endl;
	}
};

int main() {
	// 父类引用指向子类对象
	Dog dog1;
	Animal& animal1 = dog1;
	animal1.week();
	// or
	Animal dog2 =  Dog();
	dog2.week();

	return 0;
}
```
## 晚绑定
```c++
#include <iostream>

class Animal {
public:
	int age;
	std::string name;
	virtual void week() {
		std::cout << "Animal week" << std::endl;
	}
};

class Dog : public Animal {
public:
	// 重写
	void week() override {
		std::cout << "Dog week" << std::endl;
	}
};

int main() {
	// 父类引用指向子类对象
	Dog dog1;
	Animal& animal1 = dog1;
	animal1.week(); // dog
	Animal dog2 = Dog();
	dog2.week(); // Animal

	Animal* dog3 = new Dog();
	dog3->week(); // Dog
	delete dog3;

	return 0;
}
```
## 纯虚函数
```c++
#include <iostream>

class Animal {
public:
	int age;
	std::string name;
	// 纯虚函数，子类必须实现
	virtual void week() = 0;
};

class Dog : public Animal {
public:
	// 重写
	void week() override {
		std::cout << "Dog week" << std::endl;
	}
};

int main() {
	// 父类引用指向子类对象
	Dog dog1;
	Animal& animal1 = dog1;
	animal1.week(); // dog

	Animal* dog3 = new Dog();
	dog3->week(); // Dog
	delete dog3;

	return 0;
}
```
## 虚析构函数
```C++
#include <iostream>

class Animal {
public:
	int age;
	std::string name;
	// 纯虚函数，子类必须实现
	virtual void week() = 0;
	// 虚析构函数
	virtual ~Animal() {
	};
};

class Dog : public Animal {
public:
	// 重写
	void week() override {
		std::cout << "Dog week" << std::endl;
	}
	// 重写虚析构函数
	~Dog() override {}
};

int main() {
	// 父类引用指向子类对象
	Dog dog1;
	Animal& animal1 = dog1;
	animal1.week(); // dog

	Animal* dog3 = new Dog();
	dog3->week(); // Dog
	delete dog3;

	return 0;
}
```
# 结构体,和class不同的是默认为public
```C++
#include <iostream>

struct Animal {
public:
	int age;
	std::string name;
	// 纯虚函数，子类必须实现
	virtual void week() = 0;
	// 虚析构函数
	virtual ~Animal() {
	};
};

struct Dog : public Animal {
public:
	// 重写
	void week() override {
		std::cout << "Dog week" << std::endl;
	}
	// 重写虚析构函数
	~Dog() override {}
};

int main() {
	// 父类引用指向子类对象
	Dog dog1;
	Animal& animal1 = dog1;
	animal1.week(); // dog

	Animal* dog3 = new Dog();
	dog3->week(); // Dog
	delete dog3;

	return 0;
}
```

# 模板
## 函数模板
```C++
#include <iostream>

template<typename T>
T add(T a, T b) {
	return a + b;
}


int main() {
	int a = add<int>(10, 20);
	int b = add(10, 20);
	return 0;
}
```

## 类模板
```C++
#include <iostream>

template<typename T>
class A {
public:
	T t1;
};


int main() {
	A<int> a();
	return 0;
}
```

# STL标准模板库
## 容器
### string
```C++
/**
 * string容器
 */
void Day05::stetString() {
    // 构造方法
    std::string s1 = std::string();
    std::string s2 = std::string("abc");
    char *c3 = "abc";
    std::string s3 = std::string(c3);
    std::string s4 = std::string(5, 'a');
    // 赋值
    std::string s5 = "abcd";
    std::string s6;
    s6.assign("anc");
    s6.assign("anc", 2);
    s6.assign("anc", 1, 2);
    s6.assign('A', 2);
    // 获取
    std::cout << s5[0] << std::endl;
    std::cout << s5.at(1) << std::endl;
    // C++字符串转c字符数组
    const char *string = s5.c_str();
    // 拼接
    std::string s7 = s5 + s4;
    s7 += s6;
    s7.append(2, 'A');
    s7.append(s5);
    s7.append(s2);
    s7.append(s2, 1);
    s7.append(s2, 1, 3);
    std::cout << s7 << std::endl;
    // 查找
    s7.find("abc", 0);// 从0位开始找
    s7.find("abc", 5, 2);// 查找字符串的前2位查找
    s7.rfind("abc");// 最后一次出现，参数和正向查找一致使用
    // 替换
    s7.replace(0, 20, "abc"); // 0位开始的后20位替换为abc
    // 比较字符串
    std::string s8 = "abcd";
    std::string s9 = "abc";
    std::cout << (s8 > s9) << std::endl;
    std::cout << (s8 < s9) << std::endl;
    std::cout << (s8 == s9) << std::endl;
    // 1:前大后小 -1前小后大 0相等
    std::cout << s8.compare(s9) << std::endl;
    // 字串获取
    std::string s10 = s8.substr(0, 2);
    // 插入
    s10.insert(2,"abc");
    s10.insert(2,5,'A');// 插入5个A
    // 删除
    s10.erase(2,5);// 从2下标开始删除5个字符
}
```
### vector
#### 遍历
```C++
#include <iostream>
#include <vector>

void ergodicVector() {
	// 创建vector
	std::vector<int> v1;
	// 添加数据
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	// 遍历
	// begin: 获取首元素指针
	// end：获取最后一个元素的下一个指针
	for (std::vector<int>::iterator i = v1.begin(); i < v1.end(); i++) {
		// 可以做修改
		*i = (*i) * 10;
		std::cout << *i << std::endl;
	}
	// 通过增强for遍历
	for (int& item : v1) {
		item = item + 10;
		std::cout << item << std::endl;
	}

}

int main() {
	ergodicVector();
	return 0;
}
```
#### 构造函数
```C++
#include <iostream>
#include <vector>

void ergodicVector() {
	// 创建vector
	std::vector<int> v1;
	// 添加数据
	v1.push_back(10);
	// 创建2,10个5
	std::vector<int> v2(10, 5);
	// 拷贝构造函数
	std::vector<int> v3 = std::vector<int>(v2);
	std::vector<int> v3 = std::vector<int>(v2.begin(), v2.end());
	// 使用array构造
	int arr1[] = { 1,2,3,4,5 };
	std::vector<int> v4 = std::vector<int>(arr1, arr1 + 3);
}


int main() {
	ergodicVector();
	return 0;
}
```
```C++
#include <iostream>
#include <vector>

void ergodicVector() {
	// 创建vector
	std::vector<int> v1;
	// 添加数据
	v1.push_back(10);
	// 创建2,10个5
	std::vector<int> v2(10, 5);
	// 拷贝构造函数
	std::vector<int> v3 = std::vector<int>(v2);
	std::vector<int> v4 = std::vector<int>(v2.begin(), v2.end());
	// 使用array构造
	int arr1[] = { 1,2,3,4,5 };
	std::vector<int> v5 = std::vector<int>(arr1, arr1 + 3);
	// 拷贝数据进入vector
	std::vector<int> v6;
	v6.assign(v5.begin(), v5.end());
	// 获取容器中的元素个数
	size_t len = v6.size();
	// 容器是否为空
	bool e = v6.empty();
	// 容器容量
	size_t capacity = v6.capacity();
	// 重置大小
	v6.resize(20);
	// 使用9填充
	v6.resize(20, 9);
	// 数据读取
	int v0 = v6.at(0);
	int v1 = v6[1];
	// 第一个元素
	int front = v6.front();
	// 最后一个元素
	int back = v6.back();
	// 插入数据,插入5个0
	v6.insert(v6.begin() + 3, 5, 0);
	// 末尾追加
	v6.push_back(10);
	// 移除末尾元素
	v6.pop_back();
	// 根据指针范围删除
	v6.erase(v6.begin() + 1);
	v6.erase(v6.begin(), v6.end());
	// 清空
	v6.clear();
	// 交换
	v6.swap(v1);
}

int main() {
	ergodicVector();
	return 0;
}
```

### deque容器
```C++
```