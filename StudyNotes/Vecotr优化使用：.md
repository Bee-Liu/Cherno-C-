# Vecotr优化使用：

## 1.

![image-20221227120725136](C:\Users\babyheart\AppData\Roaming\Typora\typora-user-images\image-20221227120725136.png)

![image-20221227120734847](C:\Users\babyheart\AppData\Roaming\Typora\typora-user-images\image-20221227120734847.png)

## 2.

![image-20221227120752435](C:\Users\babyheart\AppData\Roaming\Typora\typora-user-images\image-20221227120752435.png)

![image-20221227120810156](C:\Users\babyheart\AppData\Roaming\Typora\typora-user-images\image-20221227120810156.png)

## 3.

​														这实际上是在main函数中构造的，然后复制到vector中

![image-20221227121139794](C:\Users\babyheart\AppData\Roaming\Typora\typora-user-images\image-20221227121139794.png)

​						我想在实际的vector中构造，我们可以这样做，使用emplace_back,而不是push_back

![image-20221227121430644](C:\Users\babyheart\AppData\Roaming\Typora\typora-user-images\image-20221227121430644.png)

![image-20221227121600013](C:\Users\babyheart\AppData\Roaming\Typora\typora-user-images\image-20221227121600013.png)

​                                                              	可以看到一次Copy!都没有打印！

