SELECT COUNT(*) FROM favorites WHERE language = 'c';

SELECT COUNT(*) FROM favorites WHERE language = 'c' AND problem = 'Hello,world';

SELECT COUNT(*) FROM favorites WHERE language = 'c' AND problem = 'Hello, It''s Me';

SELECT COUNT(*) FROM favorites WHERE language = 'c' AND problem = 'Hello,world' OR problem = 'Hello, It''s Me';

SELECT COUNT(*) FROM favorites WHERE language = 'c' AND problem LIKE 'Hello, %';

SELECT language, COUNT(*) FROM favorites GROUP BY language;
-- Returns the count of each distinct language in the column languages
SELECT language, COUNT(*) FROM favorites GROUP BY language ORDER BY COUNT(*) DESC;
-- Returns the count of each distinct language in the column languages and orders by descending
SELECT language, COUNT(*) AS n FROM favorites GROUP BY language ORDER BY COUNT(*) DESC;
-- Adds and alias to count
SELECT language, COUNT(*) AS n FROM favorites GROUP BY language ORDER BY COUNT(*) DESC LIMIT 1;
-- Only shows the top language