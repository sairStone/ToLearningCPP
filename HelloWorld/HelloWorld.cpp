#include<iostream>
#include"Log.h"

void Logm(const char* message);

void Log(const char* message) {
	std::cout << message << std::endl;
}

int main() {
	const char* mes1 = "abcde";
	const char mes2 = 'a'; //const char mes2 =  "abc"; 不能用于字符串，字符串实际上以数组存贮，数组指针指向

	//mes1[1] = 'c';


	std::cout << "hello world" << std::endl;
	std::cout << mes1 << std::endl;
	Logm("Hello");
	Log("World");
	std::cin.get();
}


//cpp的编译过程：
//1.预处理阶段，把#include和#define等内容插入或替换到源代码中，
//2.编译阶段，编译器（compiler）把预处理后代码转换成汇编语言，然后编译器对代码进行检查
//3.汇编阶段，汇编器（assembler）将汇编语言转换为机器语言代码，生成目标文件(.obj)
//4.链接阶段，链接器（linker）把多个目标文件和库文件链接后，生成可执行文件(.exe)


//const char* message
//1.这是一个指向字符的指针。它声明了一个指向const char类型的指针，该指针指向一个字符。
//2.你可以通过指针来访问和修改该字符。例如，你可以将指针指向另一个字符，或者修改指针所指向的字符的值。
//3.当你需要传递字符串时，通常使用这种类型。例如，当你调用C标准库中的printf函数时，你需要将字符串作为参数传递给它。

//const char message
//1.这是一个字符常量。它声明了一个const char类型的变量，该变量的值是一个字符。
//2.你不能修改这个字符的值。尝试修改它的值会导致编译错误。
//3.当你需要声明单个字符时，通常使用这种类型。