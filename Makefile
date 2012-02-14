# Makefile for crypt test program
CC           = cc  
CC_FLAGS     = -Wall
LINKER-FLAGS = -lcrypt -o  
RM           = rm
TARGET       = ctest
.IGNORE:  
.SILENT: 

$(TARGET): 
	$(CC) $(TARGET).c $(CC_FLAGS) $(LINKER-FLAGS) $(TARGET)

clean:
	$(RM) $(TARGET)