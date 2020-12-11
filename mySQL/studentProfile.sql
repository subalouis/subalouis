DROP DATABASE IF EXISTS studentProfile;
CREATE DATABASE studentProfile;

USE studentProfile;

CREATE TABLE studentClassList(
studentnumb int (15) NOT NULL,
studFName VARCHAR (20) NOT NULL,
studLName VARCHAR (10) NOT NULL,
studMName VARCHAR (10) NOT NULL,
email VARCHAR (20) NOT NULL, 
PRIMARY KEY studentnumb 
1class VARCHAR (15) NOT NULL,
)
ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;