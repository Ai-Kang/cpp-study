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
