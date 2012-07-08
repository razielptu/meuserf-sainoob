


#####################################################################
.PHONY : all adduser mapcache clean help

all: adduser mapcache

adduser:
	gcc -o ../../tools/adduser adduser.c

mapcache:
	gcc -o ../../mapcache mapcache.c grfio.c -lz

clean:
	rm -rf *.o ../../tools/adduser ../../mapcache

help:
	@echo "possible targets are 'adduser' 'mapcache' 'all' 'clean' 'help'"
	@echo "'adduser'   - ???"
	@echo "'mapcache'  - mapcache generator"
	@echo "'all'       - builds all above targets"
	@echo "'clean'     - cleans builds and objects"
	@echo "'help'      - outputs this message"

#####################################################################
