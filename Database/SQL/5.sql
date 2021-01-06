DROP TABLE DEV.ORD_RANDOM PURGE;
CREATE TABLE DEV.ORD_RANDOM AS
SELECT * FROM DEV.ORD ORDER BY DBMS_RANDOM.RANDOM;

DROP TABLE DEV.ORD_ITEM_RANDOM PURGE;
CREATE TABLE DEV.ORD_ITEM_RANDOM AS
SELECT * FROM DEV.ORD_ITEM ORDER BY DBMS_RANDOM.RANDOM;

ALTER TABLE DEV.ORD_RANDOM ADD CONSTRAINT ORD_RANDOM_PK PRIMARY KEY (ORD_NO);

CREATE INDEX DEV.ORD_RANDOM_X01 ON DEV.ORD_RANDOM(ORD_DT, ORD_HMS);

ALTER TABLE DEV.ORD_ITEM_RANDOM ADD CONSTRAINT ORD_ITEM_RANDOM_PK PRIMARY KEY (ORD_NO, ITEM_ID);

CREATE INDEX DEV.ORD_ITEM_RANDOM_X01 ON DEV.ORD_ITEM_RANDOM(ORD_DT, ORD_HMS);

