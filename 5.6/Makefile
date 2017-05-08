bigoutput littleoutput:text.g
generate text.g -$(subst,output,,$@)>;$@ # 第一个$表示执行一个makefile函数，函数名为subst，后面的是参数。

# 等价于下面：
# bigoutput:text.g
# generate text.g -big>; bigoutput

#littleoutput：text.g
# generate text.g -little>; littleoutput


