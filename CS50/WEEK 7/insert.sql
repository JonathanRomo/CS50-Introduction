INSERT INTO favorites(language, problem) VALUES ('SQL','Fiftyville');
--blanks are NULL
DELETE FROM favorites WHERE Timestamp IS NULL;

DELETE FROM favorites;
--Deletes all the values from a table

UPDATE favorites SET language = 'SQL', problem = 'Fiftyville';
--Updates all the values from the table to SQL abd Fiftyville
DROP TABLE favorites;
-- Deletes the whole table and schema