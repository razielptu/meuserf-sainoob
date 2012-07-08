# Tabela SQL Otimizada - Main
# Criada por Mara

# Não use em servidores de médio ou grande porte, pode conter bugs!!

# Table structure for table [auction]
create table if not exists auction (
auction_id int(10) primary key not null auto_increment,
seller_id mediumint(8) not null default '0',
seller_name varchar(23) not null default '',
buyer_id mediumint(8) not null default '0',
buyer_name varchar(23) not null default '',
price int(10) not null default '0',
buynow int(10) not null default '0',
hours smallint(5) not null default '0',
`timestamp` int(10) not null default '0',
nameid smallint(5) not null default '0',
item_name varchar(50) not null default '',
type smallint(5) not null default '0',
refine tinyint(3) not null default '0',
attribute tinyint(3) not null default '0',
card0 smallint(5) not null default '0',
card1 smallint(5) not null default '0',
card2 smallint(5) not null default '0',
card3 smallint(5) not null default '0'
)engine=myisam;

# Table structure for table [cart_inventory]
create table if not exists cart_inventory (
id int(10) primary key not null auto_increment,
char_id mediumint(8) not null default '0',
nameid smallint(5) not null default '0',
amount smallint(5) not null default '0',
equip tinyint(3) not null default '0',
identify tinyint(1) not null default '0',
refine tinyint(3) not null default '0',
attribute tinyint(3) not null default '0',
card0 smallint(5) not null default '0',
card1 smallint(5) not null default '0',
card2 smallint(5) not null default '0',
card3 smallint(5) not null default '0',
expire_time int(10) not null default '0',
key char_id (char_id)
)engine=myisam;

# Table structure for table [char]
create table if not exists `char` (
char_id mediumint(8) primary key not null auto_increment,
account_id mediumint(8) not null default '0',
char_num tinyint(1) not null default '0',
name varchar(23) not null default '',
class smallint(5) not null default '0',
base_level tinyint(3) not null default '1',
job_level tinyint(3) not null default '1',
base_exp bigint(19) not null default '0',
job_exp bigint(19) not null default '0',
zeny int(10) not null default '0',
str smallint(5) not null default '0',
agi smallint(5) not null default '0',
vit smallint(5) not null default '0',
`int` smallint(5) not null default '0',
dex smallint(5) not null default '0',
luk smallint(5) not null default '0',
max_hp mediumint(8) not null default '0',
hp mediumint(8) not null default '0',
max_sp mediumint(8) not null default '0',
sp mediumint(8) not null default '0',
status_point mediumint(8) not null default '0',
skill_point tinyint(3) not null default '0',
`option` int(10) not null default '0',
`karma` tinyint(1) not null default '0',
manner smallint(5) not null default '0',
party_id mediumint(8) not null default '0',
guild_id mediumint(8) not null default '0',
pet_id smallint(5) not null default '0',
homun_id smallint(5) not null default '0',
hair tinyint(3) not null default '0',
hair_color tinyint(3) not null default '0',
clothes_color tinyint(3) not null default '0',
weapon smallint(5) not null default '0',
shield smallint(5) not null default '0',
head_top smallint(5) not null default '0',
head_mid smallint(5) not null default '0',
head_bottom smallint(5) not null default '0',
robe smallint(5) not null default '0',
last_map varchar(11) not null default 'new_1-1',
last_x smallint(5) not null default '53',
last_y smallint(5) not null default '111',
save_map varchar(11) not null default 'new_1-1',
save_x smallint(5) not null default '53',
save_y smallint(5) not null default '111',
partner_id mediumint(8) not null default '0',
online tinyint(1) not null default '0',
father mediumint(8) not null default '0',
mother mediumint(8) not null default '0',
child mediumint(8) not null default '0',
fame int(10) not null default '0',
`rename` tinyint(1) not null default '0',
`delete_date` mediumint(8) not null default '0',
key account_id (account_id),
key party_id (party_id),
key guild_id (guild_id),
key name (name),
key online (online)
)engine=myisam auto_increment=150000;

# Table structure for table [charlog]
create table if not exists charlog (
`time` datetime not null default '0000-00-00 00:00:00',
char_msg varchar(255) not null default 'char select',
account_id mediumint(8) not null default '0',
char_num tinyint(3) not null default '0',
name varchar(23) not null default '',
str smallint(5) not null default '0',
agi smallint(5) not null default '0',
vit smallint(5) not null default '0',
`int` smallint(5) not null default '0',
dex smallint(5) not null default '0',
luk smallint(5) not null default '0',
hair tinyint(3) not null default '0',
hair_color tinyint(3) not null default '0'
)engine=myisam;

# Table structure for table [elemental]
create table if not exists elemental (
ele_id int(10) primary key not null auto_increment,
char_id mediumint(8) not null,
class mediumint(8) not null default '0',
mode int(10) not null default '1',
hp int(10) not null default '1',
sp int(10) not null default '1',
max_hp mediumint(8) not null default '0',
max_sp mediumint(8) not null default '0',
str smallint(5) not null default '0',
agi smallint(5) not null default '0',
vit smallint(5) not null default '0',
int smallint(5) not null default '0',
dex smallint(5) not null default '0',
luk smallint(5) not null default '0',
life_time int(11) not null default '0'
)engine=myisam;

# Table structure for table [friends]
create table if not exists friends (
char_id mediumint(8) not null default '0',
friend_account mediumint(8) not null default '0',
friend_id mediumint(8) not null default '0',
key char_id (char_id)
)engine=myisam;

# Table structure for table [global_reg_value]
create table if not exists global_reg_value (
char_id mediumint(8) not null default '0',
str varchar(255) not null default '',
value varchar(255) not null default '0',
type tinyint(3) not null default '3',
account_id mediumint(8) not null default '0',
primary key (char_id,str,account_id),
key account_id (account_id),
key char_id (char_id)
)engine=myisam;

# Table structure for table [guild]
create table if not exists guild (
guild_id mediumint(8) not null auto_increment,
name varchar(23) not null default '',
char_id mediumint(8) not null default '0',
master varchar(23) not null default '',
guild_lv tinyint(3) not null default '0',
connect_member tinyint(3) not null default '0',
max_member tinyint(3) not null default '0',
average_lv smallint(3) not null default '1',
exp bigint(19) not null default '0',
next_exp int(10) not null default '0',
skill_point tinyint(3)not null default '0',
mes1 varchar(60) not null default '',
mes2 varchar(120) not null default '',
emblem_len int(10) not null default '0',
emblem_id int(10) not null default '0',
emblem_data blob,
primary key (guild_id,char_id),
unique key guild_id (guild_id),
key char_id (char_id)
)engine=myisam;

# Table structure for table [guild_alliance]
create table if not exists guild_alliance (
guild_id mediumint(8) not null default '0',
opposition mediumint(8) not null default '0',
alliance_id mediumint(8) not null default '0',
name varchar(23) not null default '',
primary key (guild_id,alliance_id),
key alliance_id (alliance_id)
)engine=myisam;

# Table structure for table [guild_castle]
create table if not exists guild_castle (
castle_id tinyint(3) primary key not null default '0',
guild_id mediumint(8) not null default '0',
economy int(10) not null default '0',
defense int(10) not null default '0',
triggerE int(10) not null default '0',
triggerD int(10) not null default '0',
nextTime int(10) not null default '0',
payTime int(10) not null default '0',
createTime int(10) not null default '0',
visibleC int(10) not null default '0',
visibleG0 int(10) not null default '0',
visibleG1 int(10) not null default '0',
visibleG2 int(10) not null default '0',
visibleG3 int(10) not null default '0',
visibleG4 int(10) not null default '0',
visibleG5 int(10) not null default '0',
visibleG6 int(10) not null default '0',
visibleG7 int(10) not null default '0',
key guild_id (guild_id)
)engine=myisam;

# Table structure for table [guild_expulsion]
create table if not exists guild_expulsion (
guild_id mediumint(8) not null default '0',
account_id mediumint(8) not null default '0',
name varchar(23) not null default '',
mes varchar(40) not null default '',
primary key (guild_id,name)
)engine=myisam;

# Table structure for table [guild_member]
create table if not exists guild_member (
guild_id mediumint(8) not null default '0',
account_id mediumint(8) not null default '0',
char_id mediumint(8) not null default '0',
hair tinyint(3) not null default '0',
hair_color tinyint(3) not null default '0',
gender tinyint(1) not null default '0',
class smallint(5) not null default '0',
lv smallint(5) not null default '0',
exp int(10) not null default '0',
exp_payper tinyint(3) not null default '0',
online tinyint(1) not null default '0',
position tinyint(3) not null default '0',
name varchar(23) not null default '',
primary key (guild_id,char_id),
key char_id (char_id)
)engine=myisam;

# Table structure for table [guild_position]
create table if not exists guild_position (
guild_id mediumint(8) not null default '0',
position tinyint(3) not null default '0',
name varchar(23) not null default '',
mode tinyint(3) not null default '0',
exp_mode tinyint(3) not null default '0',
primary key (guild_id,position),
key guild_id (guild_id)
)engine=myisam;

# Table structure for table [guild_skill]
create table if not exists guild_skill (
guild_id mediumint(8) not null default '0',
id smallint(5) not null default '0',
lv tinyint(3) not null default '0',
primary key (guild_id,id)
)engine=myisam;

# Table structure for table [guild_storage]
create table if not exists guild_storage (
id mediumint(8) primary key not null auto_increment,
guild_id mediumint(8) not null default '0',
nameid smallint(5) not null default '0',
amount smallint(5) not null default '0',
equip tinyint(3) not null default '0',
identify tinyint(1) not null default '0',
refine tinyint(3) not null default '0',
attribute tinyint(3) not null default '0',
card0 smallint(5) not null default '0',
card1 smallint(5) not null default '0',
card2 smallint(5) not null default '0',
card3 smallint(5) not null default '0',
expire_time int(10) not null default '0',
key guild_id (guild_id)
)engine=myisam;

# Table structure for table [homunculus]
create table if not exists homunculus (
homun_id int(10) primary key not null auto_increment,
char_id mediumint(8) not null default '0',
class smallint(5) not null default '0',
name varchar(23) not null default '',
level tinyint(3) not null default '0',
exp int(10) not null default '0',
intimacy smallint(5) not null default '0',
hunger tinyint(3) not null default '0',
str smallint(5) not null default '0',
agi smallint(5) not null default '0',
vit smallint(5) not null default '0',
`int` smallint(5) not null default '0',
dex smallint(5) not null default '0',
luk smallint(5) not null default '0',
hp int(10) not null default '1',
max_hp int(10) not null default '1',
sp int(10) not null default '1',
max_sp int(10) not null default '1',
skill_point tinyint(3) not null default '0',
alive tinyint(1) not null default '1',
rename_flag tinyint(1) not null default '0',
vaporize tinyint(1) not null default '0'
)engine=myisam;

# Table structure for table [hotkey]
create table if not exists hotkey (
char_id mediumint(8) not null default '0',
hotkey tinyint(3) not null default '0',
type tinyint(1) not null default '0',
itemskill_id smallint(5) not null default '0',
skill_lvl tinyint(3) not null default '0',
primary key (char_id,hotkey),
index (char_id)
)engine=myisam;

# Table structure for table [interlog]
create table if not exists interlog (
time datetime not null default '0000-00-00 00:00:00',
log varchar(255) not null default ''
)engine=myisam; 

# Table structure for table [inventory]
create table if not exists inventory (
id int(10) primary key not null auto_increment,
char_id mediumint(8) not null default '0',
nameid smallint(5) not null default '0',
amount smallint(5) not null default '0',
equip tinyint(3) not null default '0',
identify tinyint(1) not null default '0',
refine tinyint(3) not null default '0',
attribute tinyint(3) not null default '0',
card0 smallint(5) not null default '0',
card1 smallint(5) not null default '0',
card2 smallint(5) not null default '0',
card3 smallint(5) not null default '0',
expire_time int(10) not null default '0',
key char_id (char_id)
)engine=myisam;

# Table structure for table [ipbanlist]
create table if not exists ipbanlist (
list varchar(255) not null default '',
btime datetime not null default '0000-00-00 00:00:00',
rtime datetime not null default '0000-00-00 00:00:00',
reason varchar(255) not null default '',
key (list)
)engine=myisam;

# Table structure for table [login]
create table if not exists login (
account_id mediumint(8) primary key not null auto_increment,
userid varchar(23) not null default '',
user_pass varchar(32) not null default '',
sex enum('M','F','S') not null default 'M',
email varchar(39) not null default '',
level tinyint(3) not null default '0',
state tinyint(3) not null default '0',
unban_time int(10) not null default '0',
expiration_time int(10) not null default '0',
logincount mediumint(8) not null default '0',
lastlogin datetime not null default '0000-00-00 00:00:00',
last_ip varchar(40) not null default '',
birthdate date not null default '0000-00-00',
KEY name (userid)
)engine=myisam auto_increment=2000000;
#add_user
insert into login (account_id, userid, user_pass, sex, email) values ('1', 's1', 'p1', 'S','athena@athena.com');

# Table structure for table [mail]
create table if not exists mail (
id int(10) primary key not null auto_increment,
send_name varchar(23) not null default '',
send_id mediumint(8) not null default '0',
dest_name varchar(23) not null default '',
dest_id mediumint(8) not null default '0',
title varchar(45) not null default '',
message varchar(255) not null default '',
time int(10) not null default '0',
status tinyint(2) not null default '0',
zeny int(10) not null default '0',
nameid smallint(5) not null default '0',
amount smallint(5) not null default '0',
refine tinyint(3) not null default '0',
attribute tinyint(3) not null default '0',
identify tinyint(1) not null default '0',
card0 smallint(5) not null default '0',
card1 smallint(5) not null default '0',
card2 smallint(5) not null default '0',
card3 smallint(5) not null default '0'
)engine=myisam;

# Table structure for table [mapreg]
create table if not exists mapreg (
varname varchar(32) not null default '',
`index` int(10) not null default '0',
value varchar(255) not null default '',
key varname (varname),
key `index` (`index`)
)engine=myisam;

# Table structure for table [memo]
create table if not exists memo (
memo_id int(10) primary key not null auto_increment,
char_id mediumint(8) not null default '0',
map varchar(11) not null default '',
x smallint(5) not null default '0',
y smallint(5) not null default '0',
key char_id (char_id)
)engine=myisam;

# Table structure for table [mercenary]
create table if not exists mercenary (
mer_id int(10) primary key not null auto_increment,
char_id mediumint(8) not null default '0',
class smallint(5) not null default '0',
hp int(10) not null default '1',
sp int(10) not null default '1',
kill_counter int(10) not null default '0',
life_time int(10) not null default '0'
)engine=myisam;

# Table structure for table [mercenary_owner]
create table if not exists mercenary_owner (
char_id mediumint(8) primary key not null default '0',
merc_id int(10) not null default '0',
arch_calls int(10) not null default '0',
arch_faith int(10) not null default '0',
spear_calls int(10) not null default '0',
spear_faith int(10) not null default '0',
sword_calls int(10) not null default '0',
sword_faith int(10) not null default '0'
)engine=myisam;

# Table structure for table [party]
create table if not exists party (
party_id int(10) primary key not null auto_increment,
name varchar(23) not null default '',
exp tinyint(1) not null default '0',
item tinyint(1) not null default '0',
leader_id mediumint(8) not null default '0',
leader_char mediumint(8) not null default '0'
)engine=myisam;

# Table structure for table [pet]
create table if not exists pet (
pet_id mediumint(8) primary key not null auto_increment,
class smallint(5) not null default '0',
name varchar(23) not null default '',
account_id mediumint(8) not null default '0',
char_id mediumint(8) not null default '0',
level tinyint(3) not null default '0',
egg_id smallint(5) not null default '0',
equip tinyint(3) not null default '0',
intimate smallint(5) not null default '0',
hungry tinyint(3) not null default '0',
rename_flag tinyint(1) not null default '0',
incuvate tinyint(1) not null default '0'
)engine=myisam;

# Table structure for table [quest]
create table if not exists quest (
char_id mediumint(8) not null default '0',
quest_id mediumint(8) not null default '0',
state enum('0','1','2') not null default '0',
time int(10) not null default '0',
count1 smallint(5) not null default '0',
count2 smallint(5) not null default '0',
count3 smallint(5) not null default '0',
primary key (char_id,quest_id)
)engine=myisam;

# Table structure for table [ragsrvinfo]
create table if not exists ragsrvinfo (
`index` tinyint(3) not null default '0',
name varchar(255) not null default '',
exp mediumint(8) not null default '0',
jexp mediumint(8) not null default '0',
`drop` mediumint(8) not null default '0'
)engine=myisam;

# Table structure for table [sc_data]
create table if not exists sc_data (
account_id mediumint(8) not null default '0',
char_id mediumint(8) not null default '0',
type tinyint(3) not null default '0',
tick smallint(5) not null default '0',
val1 smallint(5) not null default '0',
val2 smallint(5) not null default '0',
val3 smallint(5) not null default '0',
val4 smallint(5) not null default '0',
key (account_id),
key (char_id)
)engine=myisam;

# Table structure for table [skill]
create table if not exists skill (
char_id mediumint(8) not null default '0',
id smallint(5) not null default '0',
lv tinyint(3) not null default '0',
primary key (char_id,id),
key char_id (char_id)
)engine=myisam;

# Table structure for table [skillcooldown]
create table if not exists skillcooldown (
account_id mediumint(8) primary key not null default '0',
char_id mediumint(8) not null default '0',
skill_id smallint(5) not null default '0',
`tick` smallint(5) not null default '0',
key (account_id),
key (char_id)
)engine=myisam;

# Table structure for table [skill_homunculus]
create table if not exists skill_homunculus (
homun_id mediumint(8) primary key not null default '0',
id smallint(5) not null default '0',
lv tinyint(3) not null default '0',
key homun_id (homun_id)
)engine=myisam;

# Table structure for table [sstatus]
create table if not exists sstatus (
`index` tinyint(3) not null default '0',
name varchar(255) not null default '',
user int(10) not null default '0'
)engine=myisam;

# Table structure for table [storage]
create table if not exists storage (
id mediumint(8) primary key not null auto_increment,
account_id mediumint(8) not null default '0',
nameid smallint(5) not null default '0',
amount smallint(5) not null default '0',
equip tinyint(3) not null default '0',
identify tinyint(1) not null default '0',
refine tinyint(3) not null default '0',
attribute tinyint(3) not null default '0',
card0 smallint(5) not null default '0',
card1 smallint(5) not null default '0',
card2 smallint(5) not null default '0',
card3 smallint(5) not null default '0',
expire_time int(10) not null default '0',
key account_id (account_id)
)engine=myisam;