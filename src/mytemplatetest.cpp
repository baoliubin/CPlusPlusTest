#include "mytemplatetest.h"
/*
 * 普通函数模板定义及应用方式
 */
template<typename T,typename N>
N compare(const T &left, const T &right)
{
    if (left < right) {
        qDebug() << left << "<" << right;
//        return -1;
    }
    if (right < left) {
        qDebug() << left << ">" << right;
//        return 1;
    }
//    qDebug() << left << "=" << right;
//    return 0;
}
/*
 * 普通类模板定义及应用方式
 */
template<class V> class MyTemplateTestUseV {
public:
    V testReturn() ;
};
template <class V>
V MyTemplateTestUseV<V>::testReturn ()
{
    // 追加传入元素的副本
    qDebug() << __LINE__;
//    printf("%d\n",__LINE__);
}



MyTemplateTest::MyTemplateTest()
{
    /*函数模板测试*/
    compare<int,void>(-1,1);
    /*类模板测试*/
    MyTemplateTestUseV<void> myTemplateTestUseV;
    myTemplateTestUseV.testReturn();
}


