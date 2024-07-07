### 安装基础软件
>apt install git cmake g++ gcc clang libomp-dev -y

在该处安装`libomp-dev`是因为发现clangd在代码编辑时对`omp.h`会报错，这是由于GCC和Clang的openMP库并不相同(libgomp libomp)，因此使用libomp并在`~/.config/clangd/config.yaml`中加入对应`omp.h`的位置就可以解决报错

>wget https://github.com/google/googletest/archive/refs/tags/v1.14.0.tar.gz \
>tar -xzf ./*.tar.gz\
>cd google* && mkdir build && cd build \
>cmake .. && make -j8 && make install \
>cd ../../ && rm -rf google* *.tar.gz

>wget https://www.doxygen.nl/files/doxygen-1.11.0.linux.bin.tar.gz \
>tar -xzf ./*.gz \
>cd doxygen* && cd bin && mv * /usr/local/bin \
>cd ../../ && rm -rf doxy* \
>apt直接安装的doxygen版本较低为1.9.8，最新为1.11.0
>进入目录，使用`doxygen -g doxygen.config`生成配置文件，之后使用`doxygen doxygen.config`生成html文档


### 配置插件
>vscode安装clangd插件，为避免一些报错配置项目时使用cmake，并可以使用`cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=True .`生成`compile_commands.json`文件

>vscode安装`C++ TestMate`插件，注意配置路径

>vscode安装`Doxygen Document Gnerator`和`remote ssh`，开箱即用

### 调试
>常用注释和插桩的方式进行调试\
>gdb调试：\
>编译增加-g选项 编译DEBUG版本 \
>l/list 行号/函数名                  显示对应代码 \
>r/run                              运行到下一个断点 \
>b/breakpoint 源文件:函数名/行号     在该源文件对应位置加断点 \
>info b                             断点信息 \
>d(delete) 断点编号                 删除断点 \
>n(next)                            逐过程 \
>s(stop)                            逐语句 \
>bt                                 函数调用过程 \
>p(print) 变量                      打印变量值 \
>set 变量                           设置变量值 \
>display 变量                       每次停止打印变量值 \
>c(continue)                        运行到下个断点


### 拉取远程存储库
> git clone https://gitee.com/oscc-project/iTraining.git

> git clone https://gitee.com/oscc-project/iEDA.git