
CROSS = arm-hisiv300-linux-
CPP   = $(CROSS)g++
CC    = $(CROSS)gcc
AR    = $(CROSS)ar
LD    = $(CROSS)ld
#64位系统需要加次选项才能编译.so
#CFLAGS = -fPIC 

HBASE_DIR = ./HBase
CFLAGS += -I./Include
CFLAGS += -I$(HBASE_DIR)
OBJECT += $(HBASE_DIR)/HThreadBase.o
OBJECT += $(HBASE_DIR)/HTimerbase.o
OBJECT += $(HBASE_DIR)/HTimer.o

LIBHBASE = lib/libhbase.a
LIBHBASESO = lib/libhbase.so
TARGET = $(LIBHBASE) $(LIBHBASESO)

all : $(TARGET)

$(LIBHBASE) : $(OBJECT)
	$(AR) -rv $@ $^
	echo "On success, make libhbase.a"

$(LIBHBASESO) : $(OBJECT)
	$(CPP) -fPIC -shared -o $@ $^
	echo "On success, make libhbase.so"

.c.o:
	$(CC)   $(CFLAGS) -c -o $@ $<

.cpp.o:
	$(CPP)  $(CFLAGS) -c -o $@ $<

clean:
	rm $(HBASE_DIR)/*.o
	rm lib/*.a lib/*.so

