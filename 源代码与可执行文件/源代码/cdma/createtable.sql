
create table cells
(ID int NOT NULL auto_increment, /*ID主键*/
cellid int,/*基站ID号*/
cellname varchar(100),/*基站名称*/ 
bscid int,/*所属基站控制器ID号*/
createdate datetime,/*基站建立时间*/
longitude varchar(100),/*经度*/
latitude varchar(100),/*纬度*/
description varchar(200),/*描述*/
PRIMARY KEY (ID));

CREATE UNIQUE INDEX cells_cellid ON cells (cellid);
CREATE INDEX cells_cellname ON cells (cellname);

create table bscs
(ID int NOT NULL auto_increment, /*ID主键*/
bscid int,/*基站控制器ID号*/
bscpc varchar(100),/*基站控制器信令点编码*/ 
bscname varchar(100),/*基站控制器名称*/ 
mscid int,/*所属mscID*/
branchname varchar(100),/*所属支局名称*/
createdate datetime,/*建立时间*/
description varchar(200),/*描述*/
PRIMARY KEY (ID));

CREATE UNIQUE INDEX bacs_bscid ON bscs (bscid);
CREATE INDEX bscs_bscname ON bscs (bscname);

create table mscs
(ID int NOT NULL auto_increment, /*ID主键*/
mscid int,/*移动交换中心ID号*/
mscpc varchar(100),/*移动交换中心编码*/ 
mscname varchar(100),/*移动交换中心名称*/ 
districtname varchar(100),/*所属区域名称*/
createdate datetime,/*建立时间*/
description varchar(200),/*描述*/
PRIMARY KEY (ID));

CREATE UNIQUE INDEX mscs_mscid ON mscs (mscid);
CREATE INDEX mscs_mscname ON mscs (mscname);

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (1, '0023', 1, str_to_date('2014-02-03 02:50:00','%Y-%m-%d %H:%i:%s'),
'119.7133', '30.23752', '新键基站');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (2, '0024', 1, str_to_date('2014-02-04 10:24:00','%Y-%m-%d %H:%i:%s'),
'120.3433', '33.56752', '提供商没有保修合同');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (3, '0025', 1, str_to_date('2014-03-04 17:15:00','%Y-%m-%d %H:%i:%s'),
'120.3434', '33.56751', '接线头设备需要更换');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (4, '0026', 1, str_to_date('2013-03-04 15:30:00','%Y-%m-%d %H:%i:%s'),
'120.3421', '33.56757', '基站正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (5, '0001', 2, str_to_date('2013-02-04 10:30:00','%Y-%m-%d %H:%i:%s'),
'121.3433', '34.56752', '新建基站');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (6, '0002', 2, str_to_date('2013-02-04 12:14:00','%Y-%m-%d %H:%i:%s'),
'121.3434', '34.56777', '1月例检');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (7, '0002', 2, str_to_date('2013-05-06 11:10:00','%Y-%m-%d %H:%i:%s'),
'121.3435', '34.56778', '电缆需要更换');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (8, '0003', 2, str_to_date('2014-03-10 12:10:00','%Y-%m-%d %H:%i:%s'),
'121.3436', '34.56780', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (9, '0503', 3, str_to_date('2014-01-13 17:20:00','%Y-%m-%d %H:%i:%s'),
'122.5423', '35.56353', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (10, '0504', 3, str_to_date('2014-02-13 17:20:00','%Y-%m-%d %H:%i:%s'),
'122.5424', '35.56354', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (11, '0505', 3, str_to_date('2013-06-30 10:50:00','%Y-%m-%d %H:%i:%s'),
'122.5425', '35.56355', '电压告警');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (12, '0506', 3, str_to_date('2013-07-30 08:50:00','%Y-%m-%d %H:%i:%s'),
'122.5426', '35.56356', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (13, '0321', 4, str_to_date('2013-08-10 12:20:00','%Y-%m-%d %H:%i:%s'),
'123.5433', '37.56343', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (14, '0322', 4, str_to_date('2013-08-10 12:20:00','%Y-%m-%d %H:%i:%s'),
'123.5434', '37.56344', '目前没有维护人员');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (15, '0323', 4, str_to_date('2013-08-11 12:30:00','%Y-%m-%d %H:%i:%s'),
'123.5435', '37.56345', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (16, '0324', 4, str_to_date('2014-01-15 10:40:00','%Y-%m-%d %H:%i:%s'),
'123.5436', '37.56346', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (17, '0001', 5, str_to_date('2013-12-15 10:40:00','%Y-%m-%d %H:%i:%s'),
'120.8536', '36.43873', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (18, '0002', 5, str_to_date('2013-10-25 11:20:00','%Y-%m-%d %H:%i:%s'),
'120.8537', '36.43877', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (19, '0003', 5, str_to_date('2013-11-20 11:20:00','%Y-%m-%d %H:%i:%s'),
'120.8536', '36.43878', '没有维护人员');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (20, '0710', 6, str_to_date('2013-10-15 18:10:00','%Y-%m-%d %H:%i:%s'),
'121.8530', '30.43800', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (21, '0711', 6, str_to_date('2013-11-25 18:10:00','%Y-%m-%d %H:%i:%s'),
'121.8531', '30.43801', '设备正常');

insert into cells (cellid, cellname, bscid, createdate, longitude, latitude, description)
values (22, '0712', 6, str_to_date('2013-02-12 10:40:00','%Y-%m-%d %H:%i:%s'),
'121.8532', '30.43802', '设备正常');

insert into bscs (bscid, bscpc, bscname, mscid, branchname, createdate, description)
values (1, '2.51', '西湖-001', 1, '西湖', str_to_date('2014-02-03 12:14:00','%Y-%m-%d %H:%i:%s'),
'设备正常');

insert into bscs (bscid, bscpc, bscname, mscid, branchname, createdate, description)
values (2, '2.52', '西湖-002', 1, '西湖', str_to_date('2013-01-02 10:20:00','%Y-%m-%d %H:%i:%s'),
'设备正常');

insert into bscs (bscid, bscpc, bscname, mscid, branchname, createdate, description)
values (3, '2.53', '拱墅-001', 1, '拱墅', str_to_date('2013-03-05 11:30:00','%Y-%m-%d %H:%i:%s'),
'设备正常');

insert into bscs (bscid, bscpc, bscname, mscid, branchname, createdate, description)
values (4, '2.54', '拱墅-002', 1, '拱墅', str_to_date('2014-2-10 17:00:00','%Y-%m-%d %H:%i:%s'),
'设备正常');

insert into bscs (bscid, bscpc, bscname, mscid, branchname, createdate, description)
values (5, '2.55', '萧山-001', 2, '萧山', str_to_date('2013-5-14 13:00:00','%Y-%m-%d %H:%i:%s'),
'设备正常');

insert into bscs (bscid, bscpc, bscname, mscid, branchname, createdate, description)
values (6, '2.56', '萧山-002', 2, '萧山', str_to_date('2013-7-14 15:50:00','%Y-%m-%d %H:%i:%s'),
'设备正常');

insert into mscs (mscid,mscpc, mscname, districtname,createdate, description)
values
(1, '253.69.234', 'MSC01', '城区', 
str_to_date('2014-02-03 12:14:00','%Y-%m-%d %H:%i:%s'), '设备正常');

insert into mscs (mscid,mscpc, mscname, districtname,createdate, description)
values
(2, '253.69.235', 'MSC02', '郊区', 
str_to_date('2013-01-03 12:14:00','%Y-%m-%d %H:%i:%s'), '设备正常');


