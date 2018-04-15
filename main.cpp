
#include "Sales_item.h"

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    char c = 'M';
    cout << c << endl;
    cout.put(c);
    cout << endl;

    char c1 = 77;
    // 自动转成对应的 ASCLL 码符号输出
    cout << c1 << endl;
    cout.put(c1);

    char ch;
    // 里面实际存储的是输入字符对应的 ASCLL 码值;
    cin >> ch;
    cout << ch << endl;
    cout.put(ch);
    return 0;
}

int base()
{
    using std::cout;
    using std::cin;
    using std::endl;

    /**
     * 命名空间 std::
     * 1)当使用标准库的名字时，必须显示通过作用域运算符(::)指出命名空间的名字。
     */

    /**
     * 输出运算符(<<):
     * 左侧：ostream 对象  右侧：作为 ostream 的运算对象
     */

    /**
     * 输入运算符号(>>)
     * 左侧：istream 对象 右侧：将 istream 对象返回值作为右侧的值
     */

    /**
     * 操作符 endl：
     * 1)结束当前行，将缓冲区中的内容刷到设备
     *
     * 2)保证目前为止所有的输出都写入到输出流中，而不是停留在内存中等待写入流
     */
    int sum = 0, value = 0;

    /**
     * 将 istream 作为条件时，其效果通过不断检测流的状态。
     *
     * 1)如果流是有效的，没有遇到错误，那么检测成功
     *
     * 2)如果遇到文件结束符（end-of-file），或者无效输入，istream 对象的状态会变为无效，处于无效状态的 istream 对象会使条件变为假
     */
    while (cin >> value) {
        sum += value;
        cout << "sun is " << sum << endl;
    }
    // 返回 0 代表程序正常, 非 0 代表程序异常;
    return 0;
}

