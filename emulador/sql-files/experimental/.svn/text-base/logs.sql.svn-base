# Tabela SQL Otimizada - Logs
# Criada por Mara
# Suporta IPv6

# Não use em servidores de médio ou grande porte, pode conter bugs!!

#PickLog types (M)onsters Drop, (P)layers Drop/Take, Mobs Drop (L)oot Drop/Take,
# Players (T)rade Give/Take, Players (V)ending Sell/Take, (S)hop Sell/Take, (N)PC Give/Take,
# (C)onsumable Items, (A)dministrators Create/Delete, Sto(R)age, (G)uild Storage,
# (E)mail attachment, (B)uying Store

#Database: log
#Table: picklog
create table if not exists picklog (
id int(10) primary key not null auto_increment,
time datetime not null default '0000-00-00 00:00:00',
char_id mediumint(8) not null default '0',
type enum('M','P','L','T','V','S','N','C','A','R','G','E','B') not null default 'P',
nameid smallint(5) not null default '0',
amount smallint(5) not null default '1',
refine tinyint(3) not null default '0',
card0 smallint(5) not null default '0',
card1 smallint(5) not null default '0',
card2 smallint(5) not null default '0',
card3 smallint(5) not null default '0',
map varchar(11) not null default '',
index(type)
)engine=myisam;

#ZenyLog types (M)onsters,(T)rade,(V)ending Sell/Buy,(S)hop Sell/Buy,(N)PC Change amount,(A)dministrators,(E)Mail, (B)uying Store
#Database: log
#Table: zenylog
create table if not exists zenylog (
id int(10) primary key not null auto_increment,
time datetime not null default '0000-00-00 00:00:00',
char_id mediumint(8) not null default '0',
src_id mediumint(8) not null default '0',
type enum('M','T','V','S','N','A','E','B') not null default 'S',
amount int(10) not null default '0',
map varchar(11) not null default '',
index(type)
)engine=myisam;

#Database: log
#Table: branchlog
create table if not exists branchlog (
branch_id int(10) primary key not null auto_increment,
branch_date datetime not null default '0000-00-00 00:00:00',
account_id mediumint(8) not null default '0',
char_id mediumint(8) not null default '0',
char_name varchar(23) not null default '',
map varchar(11) not null default '',
index(account_id),
index(char_id)
)engine=myisam;

#Database: log
#Table: mvplog
create table if not exists mvplog (
mvp_id int(10) primary key not null auto_increment,
mvp_date datetime not null default '0000-00-00 00:00:00',
kill_char_id mediumint(8) not null default '0',
monster_id smallint(5) not null default '0',
prize smallint(5) not null default '0',
mvpexp mediumint(8) not null default '0',
map varchar(11) not null default ''
)engine=myisam;

#Database: log
#Table: atcommandlog
create table if not exists atcommandlog (
atcommand_id int(10) primary key not null auto_increment,
atcommand_date datetime not null default '0000-00-00 00:00:00',
account_id mediumint(8) not null default '0',
char_id mediumint(8) not null default '0',
char_name varchar(23) not null default '',
map varchar(11) not null default '',
command varchar(255) not null default '',
index(account_id),
index(char_id)
)engine=myisam;

#Database: log
#Table: npclog
create table if not exists npclog (
npc_id int(10) primary key not null auto_increment,
npc_date datetime not null default '0000-00-00 00:00:00',
account_id mediumint(8) not null default '0',
char_id mediumint(8) not null default '0',
char_name varchar(23) not null default '',
map varchar(11) not null default '',
mes varchar(255) not null default '',
index(account_id),
index(char_id)
)engine=myisam;

#ChatLog types Gl(O)bal,(W)hisper,(P)arty,(G)uild,(M)ain chat
#Database: log
#Table: chatlog
create table if not exists chatlog (
id int(10) primary key not null auto_increment,
time datetime not null default '0000-00-00 00:00:00',
type enum('O','W','P','G','M') not null default 'O',
type_id int(10) not null default '0',
src_charid mediumint(8) not null default '0',
src_accountid mediumint(8) not null default '0',
src_map varchar(11) not null default '',
src_map_x tinyint(3) not null default '0',
src_map_y tinyint(3) not null default '0',
dst_charname varchar(23) not null default '',
message varchar(150) not null default '',
index(src_accountid),
index(src_charid)
)engine=myisam;

#Database: log
#Table: loginlog
create table if not exists loginlog (
time datetime not null default '0000-00-00 00:00:00',
ip varchar(40) not null default '',
user varchar(23) not null default '',
rcode tinyint(3) not null default '0',
log varchar(255) not null default '',
index(ip)
)engine=myisam;