### Effective Modern C++

>第一章 型别推导

>auto可以减少编程时进行繁杂的变量类别的编写。\
>decltype关键字可以返回操作数的类型 如：
```
std::vector<int> num1;
decltype(num1) num2;
```
>在使用template模板时，引用型实参`int &y=x`中的`y`作为实参时其会当成非引用型处理即`int`。\
>对万能引用形参`void f(T&& x)`进行推导时，左值实参会进行特殊处理`f(1)->int &&x=1`。\
>对按值传递的形参进行推导时，若实参型别中带有const或volatile修饰时，它们会被当做普通型别处理如`const int x -> int x`。\
>在模板型别推导过程中，数组或函数型别的实参会编程对应的指针，被用来初始化引用除外。

>`auto`的推导与模板的推导差异主要在于使用初始化列表即`{x, y, z}`使用`auto`会引起编译报错。\
>lambda可以在形参使用`auto`如`[&](const auto& x){y = x;}`

>大多时候，decltype会得出变量或表达式的类型且不做修改\  
>C++14的`decltype(auto)`类似于直接使用`auto`，但是推导的方式是使用decltype的规则。

>利用IDE和一些库`Boost.TypeIndex`可以看到推导出的型别。\
>理解C++的型别推导，面对一些编程的疑难杂症是让我们发现原因的来源。