TARGET=crud

$(TARGET) : main.c
	gcc -o crud main.c -L../libsrc/crudini/ -lcrud \
	-I../libsrc/crudini/

clear : 
	rm -f $(TARGET)
