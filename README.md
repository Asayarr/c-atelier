# C 语言学习仓库

从 C# 转 C 的学习记录：课程练习、笔记、刷题、小项目。

```bash
cd ~/c-learning
git pull        # 有更新就拉一下
```

---

## 目录结构

```
c-learning/
├── README.md              ← 你在这里
├── notes/                 ← 笔记
│   ├── C语言笔记.md        系统学习笔记（第 0~17 章）
│   └── 八股文.md           期末复习 Q&A + 例题（45 题 + 28 例）
├── lessons/               ← 按课分的练习（每一课的 .c 都在这里）
│   ├── 01-basics/         环境 / printf / 变量类型 / scanf
│   ├── 02-pointers/       指针基础、& 与 *、传值 vs 传指针
│   ├── 03-arrays/         数组、数组名退化、指针算术
│   ├── 04-strings/        字符数组、\0、strcpy / strcmp
│   ├── 05-multifile/      .h + .c、include guard、分开编译
│   ├── 06-structs/        结构体、typedef、-> 运算符
│   ├── 07-malloc/         malloc / calloc / realloc / free
│   ├── 08-files/          fopen / fprintf / fgets / fclose
│   └── 09-pointer-advanced/  二级指针、指针数组 vs 数组指针、函数指针
├── projects/              ← 综合项目
│   ├── contacts/          通讯录（增删查改 + 文件持久化）
│   └── proj1/             多文件计算器（add / sub）
├── problem/               ← 刷题（洛谷、课堂小测、考试题）
└── .vscode/               ← F5 编译运行的配置
```

---

## 编译与运行

**单文件（在文件所在目录里跑）：**

```bash
cd lessons/03-arrays
gcc ex5.c -o ex5 && ./ex5
```

**多文件项目：**

```bash
cd lessons/05-multifile
gcc ex9.c myutils.c -o ex9 && ./ex9
```

**通讯录：**

```bash
cd projects/contacts
gcc main.c contacts.c -o contacts && ./contacts
```

**开警告（强烈建议，能提前发现大部分低级错误）：**

```bash
gcc -Wall -Wextra -g ex5.c -o ex5
```

**查内存错误（段错误、野指针、泄漏）：**

```bash
gcc -g -fsanitize=address ex14.c -o ex14 && ./ex14
```

**用到 math.h 的数学函数时，末尾加 `-lm`：**

```bash
gcc -Wall calc.c -o calc -lm
```

> ⚠️ 编译产物（`ex5`、`a.out`、`1045` 这类没有扩展名的文件）已经在
> `.gitignore` 里排除了，**不会**被提交。放心编译。

---

## 学习路线（已完成的课）

| 课 | 主题 | 关键坑 |
|----|------|--------|
| 1 | 环境、`main` 返回值、`printf` | 局部变量不初始化是垃圾值 |
| 2 | 类型、格式符、`scanf` | `scanf` 读普通变量必须加 `&` |
| 3 | 指针 | C 没有 `ref`，要改外部变量只能传指针 |
| 4 | 数组 | 数组名是首元素地址；传参后 `sizeof` 失真 |
| 5 | 字符串 | 不能用 `=` 赋值、不能用 `==` 比较 |
| 6 | 多文件编译 | 漏 `.c` 是链接错误，漏 `.h` 是编译错误 |
| 7 | 结构体 | `p->x` 等价 `(*p).x` |
| 8 | 动态内存 | 每次 `malloc` 要有对应的 `free` |
| 9 | 文件 | `fopen` **必须**判 `NULL` |
| 10 | 指针进阶 | `int *a[5]` 和 `int (*p)[5]` 完全不同 |

---

## 考前复习入口

考试前只看这两个文件：

1. `notes/八股文.md` —— 45 道问答 + 28 个例题，末尾有「考前速记」
2. `notes/C语言笔记.md` —— 想深挖某个知识点时查

---

## 备忘

- 仓库只提交 `.c` / `.h` / 笔记；编译产物全部忽略
- `notes/八股文.md` 是个人资料，故意没有提交到 git