## This file has been edited or created to install the:
## GAMEFORT - Hacking Prevention System
##=============================================================
##    ____     _     __  __  _____  _____   ___   ____   _____
##   / ___|   / \   |  \/  || ____|| ____| / _ \ |  _ \ |_   _|
##  | |  _   / _ \  | |\/| ||  _|  |  _|  | | | || |_) |  | |
##  | |_| | / ___ \ | |  | || |___ | |    | |_| ||  _ <   | |
##   \____|/_/   \_\|_|  |_||_____||_|     \___/ |_| \_\  |_|
##
##=============================================================
## Version: 7390
## Instalation Date: 24/8/2011 17:09:03
## More Informations: http://gamefort.com.br/
##
## Don't change any information in this header, it will help
## the installer for future updates
##=============================================================

COMMON_OBJ = ../common/obj_all/gamefort.o ../common/obj_all/core.o ../common/obj_all/socket.o ../common/obj_all/timer.o \
	../common/obj_all/db.o ../common/obj_all/plugins.o ../common/obj_all/lock.o \
	../common/obj_all/malloc.o ../common/obj_all/showmsg.o ../common/obj_all/utils.o \
	../common/obj_all/strlib.o ../common/obj_all/grfio.o ../common/obj_all/mapindex.o \
	../common/obj_all/ers.o ../common/obj_all/md5calc.o
COMMON_H = ../common/gamefort.h ../common/core.h ../common/socket.h ../common/timer.h ../common/mmo.h \
	../common/version.h ../common/db.h ../common/plugins.h ../common/lock.h \
	../common/malloc.h ../common/showmsg.h ../common/utils.h ../common/strlib.h \
	../common/grfio.h ../common/mapindex.h \
	../common/ers.h ../common/md5calc.h

COMMON_SQL_OBJ = ../common/obj_sql/sql.o
COMMON_SQL_H = ../common/sql.h

LOGIN_OBJ = login.o admin.o
LOGIN_TXT_OBJ = $(LOGIN_OBJ:%=obj_txt/%) \
	obj_txt/account_txt.o obj_txt/ipban_txt.o obj_txt/loginlog_txt.o
LOGIN_SQL_OBJ = $(LOGIN_OBJ:%=obj_sql/%) \
	obj_sql/account_sql.o obj_sql/ipban_sql.o obj_sql/loginlog_sql.o
LOGIN_H = login.h account.h ipban.h loginlog.h

HAVE_MYSQL=yes
ifeq ($(HAVE_MYSQL),yes)
	LOGIN_SERVER_SQL_DEPENDS=obj_sql $(LOGIN_SQL_OBJ) $(COMMON_OBJ) $(COMMON_SQL_OBJ)
else
	LOGIN_SERVER_SQL_DEPENDS=needs_mysql
endif



#####################################################################
.PHONY :all txt sql clean help

all: txt sql

txt: obj_txt login-server

sql: obj_sql login-server_sql

clean:
	rm -rf *.o obj_txt obj_sql ../../login-server ../../login-server_sql

help:
	@echo "possible targets are 'sql' 'txt' 'all' 'clean' 'help'"
	@echo "'sql'       - login server (SQL version)"
	@echo "'txt'       - login server (TXT version)"
	@echo "'all'       - builds all above targets"
	@echo "'clean'     - cleans builds and objects"
	@echo "'help'      - outputs this message"

#####################################################################

needs_mysql:
	@echo "MySQL not found or disabled by the configure script"
	@exit 1

# object directories
obj_txt:
	test -d obj_txt || mkdir obj_txt

obj_sql:
	test -d obj_sql || mkdir obj_sql

#executables
login-server: $(LOGIN_TXT_OBJ) $(COMMON_OBJ)
	gcc  -L/usr/lib -o ../../login-server $(LOGIN_TXT_OBJ) $(COMMON_OBJ) -lrt -lm -lz  -ldl 

login-server_sql: $(LOGIN_SERVER_SQL_DEPENDS)
	gcc  -L/usr/lib -o ../../login-server_sql $(LOGIN_SQL_OBJ) $(COMMON_OBJ) $(COMMON_SQL_OBJ) -lrt -lm -lz  -ldl -rdynamic -L/usr/lib/mysql -lmysqlclient -lz -lcrypt -lnsl -lm -L/usr/lib -lssl -lcrypto

# login object files
obj_txt/%.o: %.c $(LOGIN_H) $(COMMON_H)
	gcc -g -O2 -pipe -ffast-math -Wall -Wno-sign-compare -Wno-unused-parameter -Wno-pointer-sign -Wno-switch -DHAVE_SETRLIMIT -Wno-unused -Wno-parentheses -DWITH_TXT  -I../common -I/usr/include -c $(OUTPUT_OPTION) $<

obj_sql/%.o: %.c $(LOGIN_H) $(COMMON_H)
	gcc -g -O2 -pipe -ffast-math -Wall -Wno-sign-compare -Wno-unused-parameter -Wno-pointer-sign -Wno-switch -DHAVE_SETRLIMIT -Wno-unused -Wno-parentheses -DWITH_SQL -I/usr/include/mysql  -I../common -I/usr/include -c $(OUTPUT_OPTION) $<

# missing common object files
../common/obj_all/%.o:
	@$(MAKE) -C ../common sql
