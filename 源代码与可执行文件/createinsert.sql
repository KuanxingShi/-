/*
SQLyog Trial v11.01 (32 bit)
MySQL - 5.7.17-log : Database - ralab
*********************************************************************
*/

/*!40101 SET NAMES utf8 */;

/*!40101 SET SQL_MODE=''*/;

/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;
CREATE DATABASE /*!32312 IF NOT EXISTS*/`ralab` /*!40100 DEFAULT CHARACTER SET utf8 */;

/*Table structure for table `cars` */

CREATE TABLE `cars` (
  `type` varchar(10) NOT NULL,
  `location` varchar(20) DEFAULT NULL,
  `price` int(5) DEFAULT NULL,
  `numCars` int(5) DEFAULT NULL,
  `numAvail` int(5) DEFAULT NULL,
  PRIMARY KEY (`type`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `cars` */

insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('POLO','shanghai',100,4,4);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田A10','suzhou',120,4,2);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田A4','suzhou',220,2,2);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田A5','suzhou',660,1,1);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田A6','suzhou',450,2,2);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田A7','suzhou',230,3,3);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田A8','suzhou',450,6,4);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田A9','suzhou',450,5,2);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田S1','changzhou',1100,9,9);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田S2','changzhou',120,9,9);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田S3','changzhou',130,8,8);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田S4','changzhou',120,8,8);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田S5','changzhou',130,7,7);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田S6','changzhou',1230,4,4);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('丰田S7','changzhou',1250,5,5);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('会昂','shanghai',100,5,5);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('凌渡','shanghai',220,7,7);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奔驰S1','wuxi',450,8,7);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奔驰S10','wuxi',100,8,8);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奔驰S2','wuxi',120,7,6);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奔驰S3','wuxi',120,9,9);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奔驰S4','wuxi',5440,8,8);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奔驰S5','wuxi',210,4,4);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奔驰S6','wuxi',120,5,5);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奔驰S7','wuxi',4510,6,6);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奔驰S8','wuxi',110,5,5);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奔驰S9','wuxi',110,4,4);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奥迪A4','US',100,8,7);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奥迪A4L','US',200,5,3);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奥迪A6','nanjing',200,2,1);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奥迪R8','nanjing',500,4,2);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奥迪RS3','nanjing',100,3,2);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奥迪RS6','nanjing',300,6,4);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奥迪RS7','nanjing',200,5,3);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奥迪RS8','nanjing',100,1,1);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('奥迪TT','nanjing',200,2,1);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('帕萨特','shanghai',500,4,4);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('朗境','shanghai',660,8,8);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('朗行','shanghai',200,6,6);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('朗逸','shanghai',300,9,9);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('桑塔纳','shanghai',500,5,5);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('福特T1','hefei',152,6,6);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('福特T2','hefei',120,5,5);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('福特T3','hefei',123,8,8);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('福特T4','hefei',564,4,4);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('福特T5','hefei',1223,7,7);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('福特T6','hefei',123,8,8);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('福特T7','hefei',123,45,45);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('福特T8','hefei',123,45,45);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('途观','shanghai',200,6,6);
insert  into `cars`(`type`,`location`,`price`,`numCars`,`numAvail`) values ('途观L','shanghai',55,32,32);

/*Table structure for table `customers` */

CREATE TABLE `customers` (
  `custName` varchar(10) NOT NULL,
  PRIMARY KEY (`custName`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `customers` */

insert  into `customers`(`custName`) values ('GAI');
insert  into `customers`(`custName`) values ('PGOne');
insert  into `customers`(`custName`) values ('乔振宇');
insert  into `customers`(`custName`) values ('关晓彤');
insert  into `customers`(`custName`) values ('刘亦菲');
insert  into `customers`(`custName`) values ('刘德华');
insert  into `customers`(`custName`) values ('刘诗诗');
insert  into `customers`(`custName`) values ('华晨宇');
insert  into `customers`(`custName`) values ('吴亦凡');
insert  into `customers`(`custName`) values ('周星驰');
insert  into `customers`(`custName`) values ('周笔畅');
insert  into `customers`(`custName`) values ('周车轮');
insert  into `customers`(`custName`) values ('唐嫣');
insert  into `customers`(`custName`) values ('姚星彤');
insert  into `customers`(`custName`) values ('安宝贝');
insert  into `customers`(`custName`) values ('宋茜');
insert  into `customers`(`custName`) values ('张伟欣');
insert  into `customers`(`custName`) values ('张明星');
insert  into `customers`(`custName`) values ('张艺兴');
insert  into `customers`(`custName`) values ('张颂文');
insert  into `customers`(`custName`) values ('曾梦雪');
insert  into `customers`(`custName`) values ('李丹宁');
insert  into `customers`(`custName`) values ('李小璐');
insert  into `customers`(`custName`) values ('李敏浩');
insert  into `customers`(`custName`) values ('杨幂');
insert  into `customers`(`custName`) values ('杨采钰');
insert  into `customers`(`custName`) values ('柳云龙');
insert  into `customers`(`custName`) values ('潘粤明');
insert  into `customers`(`custName`) values ('王俊凯');
insert  into `customers`(`custName`) values ('王梓');
insert  into `customers`(`custName`) values ('罗米');
insert  into `customers`(`custName`) values ('胡歌');
insert  into `customers`(`custName`) values ('舒畅');
insert  into `customers`(`custName`) values ('苍井空');
insert  into `customers`(`custName`) values ('范冰冰');
insert  into `customers`(`custName`) values ('贾乃亮');
insert  into `customers`(`custName`) values ('赵丽颖');
insert  into `customers`(`custName`) values ('赵立新');
insert  into `customers`(`custName`) values ('迪丽热巴');
insert  into `customers`(`custName`) values ('郑凯');
insert  into `customers`(`custName`) values ('郑爽');
insert  into `customers`(`custName`) values ('陈伟霆');
insert  into `customers`(`custName`) values ('雷杰');
insert  into `customers`(`custName`) values ('霍建华');
insert  into `customers`(`custName`) values ('韩庚');
insert  into `customers`(`custName`) values ('韩雨晴');
insert  into `customers`(`custName`) values ('马苏');
insert  into `customers`(`custName`) values ('高大伟');
insert  into `customers`(`custName`) values ('鹿晗');
insert  into `customers`(`custName`) values ('黄奕');
insert  into `customers`(`custName`) values ('黄子韬');

/*Table structure for table `femalecust` */

CREATE TABLE `femalecust` (
  `custName` varchar(10) NOT NULL,
  PRIMARY KEY (`custName`),
  CONSTRAINT `female` FOREIGN KEY (`custName`) REFERENCES `customers` (`custName`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `femalecust` */

insert  into `femalecust`(`custName`) values ('关晓彤');
insert  into `femalecust`(`custName`) values ('刘亦菲');
insert  into `femalecust`(`custName`) values ('刘诗诗');
insert  into `femalecust`(`custName`) values ('周笔畅');
insert  into `femalecust`(`custName`) values ('唐嫣');
insert  into `femalecust`(`custName`) values ('姚星彤');
insert  into `femalecust`(`custName`) values ('安宝贝');
insert  into `femalecust`(`custName`) values ('宋茜');
insert  into `femalecust`(`custName`) values ('张伟欣');
insert  into `femalecust`(`custName`) values ('张艺兴');
insert  into `femalecust`(`custName`) values ('曾梦雪');
insert  into `femalecust`(`custName`) values ('李小璐');
insert  into `femalecust`(`custName`) values ('李敏浩');
insert  into `femalecust`(`custName`) values ('杨幂');
insert  into `femalecust`(`custName`) values ('杨采钰');
insert  into `femalecust`(`custName`) values ('王梓');
insert  into `femalecust`(`custName`) values ('罗米');
insert  into `femalecust`(`custName`) values ('舒畅');
insert  into `femalecust`(`custName`) values ('苍井空');
insert  into `femalecust`(`custName`) values ('范冰冰');
insert  into `femalecust`(`custName`) values ('赵丽颖');
insert  into `femalecust`(`custName`) values ('迪丽热巴');
insert  into `femalecust`(`custName`) values ('郑爽');
insert  into `femalecust`(`custName`) values ('韩雨晴');
insert  into `femalecust`(`custName`) values ('马苏');
insert  into `femalecust`(`custName`) values ('黄奕');

/*Table structure for table `flights` */

CREATE TABLE `flights` (
  `flightNum` varchar(10) NOT NULL,
  `price` int(10) DEFAULT NULL,
  `numSeats` int(5) DEFAULT NULL,
  `numAvail` int(5) DEFAULT NULL,
  `FromCity` varchar(10) DEFAULT NULL,
  `ArivCity` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`flightNum`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `flights` */

insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A1',200,100,50,'nanjing','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A10',456,120,80,'suzhou','wuxi');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A11',123,130,120,'suzhou','wuxi');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A12',555,120,120,'suzhou','nanjing');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A13',220,140,130,'suzhou','hefei');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A14',220,150,140,'suzhou','hefei');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A15',320,160,150,'suzhou','hefei');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A16',650,110,100,'suzhou','nanjing');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A17',50,120,120,'suzhou','wuxi');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A18',654,130,130,'suzhou','changzhou');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A19',220,120,110,'shanghai','nanjing');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A2',156,120,20,'nanjing','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A20',663,130,120,'shanghai','nanjing');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A21',320,120,110,'shanghai','nanjing');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A22',320,130,120,'shanghai','nanjing');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A23',650,120,110,'shanghai','wuxi');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A24',321,110,100,'shanghai','wuxi');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A25',330,120,110,'shanghai','wuxi');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A26',650,130,120,'shanghai','wuxi');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A27',320,120,120,'shanghai','changzhou');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A28',650,130,130,'shanghai','changzhou');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A29',230,132,100,'shanghai','changzhou');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A3',855,100,15,'nanjing','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A30',320,120,120,'shanghai','changzhou');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A31',210,120,120,'shanghai','wuxi');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A32',210,130,130,'wuxi','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A33',650,120,120,'wuxi','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A34',320,140,140,'wuxi','hefei');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A35',320,150,150,'wuxi','hefei');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A36',120,160,160,'wuxi','hefei');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A37',320,120,120,'wuxi','hefei');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A38',212,130,130,'wuxi','hefei');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A39',210,120,120,'wuxi','hefei');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A4',653,100,50,'nanjing','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A40',320,140,140,'wuxi','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A41',450,150,150,'changzhou','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A42',650,160,160,'changzhou','wuxi');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A43',3210,120,120,'changzhou','hefei');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A44',230,130,130,'hefei','nanjing');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A45',650,120,120,'hefei','nanjing');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A46',120,120,120,'hefei','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A47',320,125,125,'hefei','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A48',120,120,120,'hefei','changzhou');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A49',120,120,120,'hefei','wuxi');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A5',263,120,120,'nanjing','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A50',320,140,140,'hefei',NULL);
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A6',236,100,50,'nanjing','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A7',41,100,10,'nanjing','suzhou');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A8',258,120,60,'suzhou','shanghai');
insert  into `flights`(`flightNum`,`price`,`numSeats`,`numAvail`,`FromCity`,`ArivCity`) values ('A9',65,110,50,'suzhou','shanghai');

/*Table structure for table `hotels` */

CREATE TABLE `hotels` (
  `name` varchar(10) NOT NULL,
  `location` varchar(20) DEFAULT NULL,
  `price` int(10) DEFAULT NULL,
  `numRooms` int(10) DEFAULT NULL,
  `numAvail` int(10) DEFAULT NULL,
  PRIMARY KEY (`name`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `hotels` */

insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H1','nanjing',200,20,10);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H10','shanghai',100,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H11','shanghai',320,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H12','shanghai',120,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H13','shanghai',120,10,10);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H14','shanghai',130,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H15','shanghai',120,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H16','suzhou',120,50,50);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H17','suzhou',111,60,60);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H18','suzhou',120,50,50);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H19','suzhou',130,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H2','nanjing',100,20,10);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H20','suzhou',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H21','suzhou',140,30,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H22','suzhou',150,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H23','suzhou',120,30,10);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H24','suzhou',120,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H25','suzhou',130,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H26','suzhou',140,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H27','wuxi',150,30,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H28','wuxi',120,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H29','wuxi',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H3','nanjing',120,30,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H30','wuxi',110,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H31','wuxi',120,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H32','wuxi',110,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H33','wuxi',150,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H34','wuxi',450,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H35','wuxi',650,20,10);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H36','changzhou',120,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H37','changzhou',130,20,15);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H38','changzhou',120,20,16);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H39','changzhou',230,30,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H4','nanjing',130,20,10);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H40','changzhou',120,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H41','hefei',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H42','hefei',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H43','hefei',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H44','hefei',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H45','hefei',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H46','hefei',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H47','hefei',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H48','hefei',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H49','hefei',230,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H5','nanjing',100,120,120);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H50','hefei',120,30,30);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H6','nanjing',120,120,120);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H7','nanjing',120,20,10);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H8','nanjing',120,20,20);
insert  into `hotels`(`name`,`location`,`price`,`numRooms`,`numAvail`) values ('H9','nanjing',110,30,30);

/*Table structure for table `items` */

CREATE TABLE `items` (
  `custName` varchar(10) NOT NULL,
  `numItem` varchar(10) NOT NULL,
  PRIMARY KEY (`custName`,`numItem`),
  CONSTRAINT `custitem` FOREIGN KEY (`custName`) REFERENCES `customers` (`custName`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `items` */

insert  into `items`(`custName`,`numItem`) values ('GAI','I04');
insert  into `items`(`custName`,`numItem`) values ('PGONE','I02');
insert  into `items`(`custName`,`numItem`) values ('刘亦菲','I07');
insert  into `items`(`custName`,`numItem`) values ('安宝贝','I08');
insert  into `items`(`custName`,`numItem`) values ('李小璐','I03');
insert  into `items`(`custName`,`numItem`) values ('杨幂','I09');
insert  into `items`(`custName`,`numItem`) values ('王俊凯','I01');
insert  into `items`(`custName`,`numItem`) values ('贾乃亮','I05');
insert  into `items`(`custName`,`numItem`) values ('马苏','I06');

/*Table structure for table `malecust` */

CREATE TABLE `malecust` (
  `custName` varchar(10) NOT NULL,
  PRIMARY KEY (`custName`),
  CONSTRAINT `male` FOREIGN KEY (`custName`) REFERENCES `customers` (`custName`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

/*Data for the table `malecust` */

insert  into `malecust`(`custName`) values ('GAI');
insert  into `malecust`(`custName`) values ('PGOne');
insert  into `malecust`(`custName`) values ('乔振宇');
insert  into `malecust`(`custName`) values ('刘德华');
insert  into `malecust`(`custName`) values ('华晨宇');
insert  into `malecust`(`custName`) values ('吴亦凡');
insert  into `malecust`(`custName`) values ('周车轮');
insert  into `malecust`(`custName`) values ('张艺兴');
insert  into `malecust`(`custName`) values ('张颂文');
insert  into `malecust`(`custName`) values ('李敏浩');
insert  into `malecust`(`custName`) values ('柳云龙');
insert  into `malecust`(`custName`) values ('潘粤明');
insert  into `malecust`(`custName`) values ('王俊凯');
insert  into `malecust`(`custName`) values ('胡歌');
insert  into `malecust`(`custName`) values ('贾乃亮');
insert  into `malecust`(`custName`) values ('赵立新');
insert  into `malecust`(`custName`) values ('郑凯');
insert  into `malecust`(`custName`) values ('陈伟霆');
insert  into `malecust`(`custName`) values ('雷杰');
insert  into `malecust`(`custName`) values ('霍建华');
insert  into `malecust`(`custName`) values ('韩庚');
insert  into `malecust`(`custName`) values ('高大伟');
insert  into `malecust`(`custName`) values ('鹿晗');
insert  into `malecust`(`custName`) values ('黄子韬');

/*Table structure for table `reservations` */

CREATE TABLE `reservations` (
  `custName` varchar(10) DEFAULT NULL,
  `resvType` varchar(10) DEFAULT NULL,
  `resvKey` int(5) NOT NULL AUTO_INCREMENT,
  `TypeKey` varchar(10) DEFAULT NULL,
  PRIMARY KEY (`resvKey`),
  KEY `custName` (`custName`),
  CONSTRAINT `custName` FOREIGN KEY (`custName`) REFERENCES `customers` (`custName`)
) ENGINE=InnoDB AUTO_INCREMENT=51 DEFAULT CHARSET=utf8;

/*Data for the table `reservations` */

insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('GAI','car',1,'丰田A2');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('PGONE','car',2,'丰田A3');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('乔振宇','flight',3,'A1');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('关晓彤','flight',4,'A2');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('刘亦菲','car',5,'福特T2');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('刘亦菲','flight',6,'A4');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('刘德华','hotel',7,'H5');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('刘诗诗','hotel',8,'H7');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('华晨宇','hotel',9,'H9');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('吴亦凡','hotel',10,'H11');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('周星驰','car',11,'奔驰S8');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('周星驰','flight',12,'A16');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('周星驰','hotel',13,'H32');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('GAI','flight',14,'A22');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('GAI','hotel',15,'H12');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('PGONE','hotel',16,'H32');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('刘诗诗','hotel',17,'H31');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('李小璐','hotel',18,'H30');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('杨幂','hotel',19,'H29');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('杨幂','flight',20,'A15');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('潘粤明','hotel',21,'H28');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('潘粤明','flight',22,'A13');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('张艺兴','hotel',23,'H25');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('张艺兴','flight',24,'A12');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('王俊凯','flight',25,'A11');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('王俊凯','hotel',26,'H24');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('胡歌','hotel',27,'H23');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('胡歌','car',28,'丰田S7');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('胡歌','flight',29,'A38');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('杨采钰','hotel',30,'H38');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('苍井空','car',31,'奔驰S7');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('苍井空','flight',32,'A7');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('范冰冰','hotel',33,'H32');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('范冰冰','car',34,'奔驰S4');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('范冰冰','flight',35,'A12');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('贾乃亮','flight',36,'A15');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('贾乃亮','hotel',37,'H16');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('赵丽颖','flight',38,'A13');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('赵丽颖','hotel',39,'H18');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('鹿晗','flight',40,'A19');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('鹿晗','car',41,'奔驰S9');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('鹿晗','hotel',42,'H20');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('黄奕','flight',43,'A26');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('黄奕','hotel',44,'H26');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('黄子韬','flight',45,'A32');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('黄子韬','hotel',46,'H12');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('迪丽热巴','car',47,'奔驰S10');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('迪丽热巴','hotel',48,'H12');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('迪丽热巴','flight',49,'A31');
insert  into `reservations`(`custName`,`resvType`,`resvKey`,`TypeKey`) values ('马苏','car',50,'丰田A6');

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;
