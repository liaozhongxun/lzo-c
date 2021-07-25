INCLUDE = -I/usr/xxx #指定头文件
DEFS = -D_POSIX_SOURCE #开启宏定义
CC =gcc 
RM = rm -rf
FLAGS= -g -o # gcc参数
OBJGEN = telnet
#需要安装termcap -l指定库
LIB = -ltermcap
#通过函数获取当前目录下所以c文件
SRC = $(wildcard *.c)
#将所有.c替换成.o，位置$(SRC)里面的，下面链接成telent时需要用到-o文件列表
OBJS = $(patsubst %.c,%.o,$(SRC))

#生成release版本
RELEASE=release
#生成SYMBOL版本
SYMBOL=symbol

$(OBJGEN):$(OBJS)
	$(CC) ${DEFS} $(FLAGS) $@ $^ $(LIB)
$(RELEASE):$(OBJGEN)
	objcopy --strip-debug $(OBJGEN) $(OBJGEN).release
	strip $(OBJGEN).release
$(SYMBOL):$(OBJGEN)
	objcopy --only-keep-debug $(OBJGEN) $(OBJGEN).symbol

#完整	$(CC) ${DEFS} $(FLAGS) $@ $^ $(INCLUDE) $(LIB)

.PHONY:clean
clean:
	$(RM) $(OBJS) $(OBJGEN) $(OBJGEN).release $(OBJGEN).symbol


