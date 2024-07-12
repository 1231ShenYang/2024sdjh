### Effective Modern C++

### 第二章 auto

>使用`auto`可以在面对复杂类型时或赋值时简化我们的编程，比如
```
std::vector<std::tuple<int, int, int>> num;
虽然我们可以使用using来简化
using TUPLE1 = std::tuple<int, int, int>;
TUPLE1 std::vector<TUPLE1> num;
但是面对这种容器或其它复杂类型时，对它的迭代器初始化其它变量或其它场景会非常繁琐，使用auto可以简单的对变量进行使用
auto item = num.begin();
并且由于auto要进行类型推导，因此必然要对该变量进行初始化，因此不会出现未初始化变量的问题。
```
>并且可以在lambda表达式的形参列表中使用，正常在函数的形参列表中直接使用会报错。\
>可以避免代码移植到不同平台时类型位数的不同而产生异常的错误而需要重新修改代码。

>面对使用`bool`的STL容器或其它代理类时需要注意其`T1::operate[]`访问内部元素返回的是`T1<T2>::reference`，如果要转为需要的类型可以使用`static_cast<T2>()`。