.schema shows.db
SELECT * FROM shows;

SELECT * FROM shows LIMIT 10;

SELECT COUNT(*) FROM shows;

SELECT COUNT(*) FROM people;

.schema ratings
SELECT * FROM ratings LIMIT 10;

SELECT * FROM shows WHERE rating >= 6.0 LIMIT 10;
SELECT * FROM shows
    WHERE id 
    IN (SELECT show_id FROM ratings WHERE rating >= 6.0) 
LIMIT 10;

SELECT title FROM shows 
    WHERE id 
    IN (SELECT show_id FROM ratings WHERE rating >= 6.0) 
LIMIT 10;

SELECT * FROM shows
    JOIN ratings ON shows.show_id = ratings.shows_id
    WHERE rating >= 6.0;

SELECT title, rating FROM shows
    JOIN ratings ON shows.id = ratings.show_id
    WHERE rating >= 6.0
    LIMIT 10;


SELECT * FROM genres;

SELECT * FROM genres WHERE id = 63881;

SELECT genre FROM genres WHERE show_id = 63881;
    
SELECT genre FROM genres WHERE show_id = (
    SELECT id FROM shows WHERE title = 'Catweazle'
)

SELECT title, genre FROM shows 
    JOIN genres ON shows.id = genre.shows_id
    WHERE id = 63881;

SELECT * FROM shows WHERE title = 'The Office' AND year = 2005;

SELECT id FROM shows WHERE title = 'The Office' AND year = 2005;

SELECT person_id FROM stars WHERE show_id = (
    SELECT id FROM shows WHERE title = 'The Office' AND year = 2005
); 

SELECT name FROM people WHERE id IN (
    SELECT person_id FROM stars WHERE show_id = (
    SELECT id FROM shows WHERE title = 'The Office' AND year = 2005
    )
);

SELECT * FROM people WHERE name = 'Steve Carell';

SELECT show_id FROM people WHERE person_id = (
    SELECT id FROM people WHERE name = 'Steve Carell');

SELECT title FROM shows WHERE id IN (
    SELECT show_id FROM stars WHERE person_id = (
    SELECT id FROM people WHERE name = 'Steve Carell')
);

SELECT tile FROM shows
    JOIN stars ON shows.id = stars.show_id
    JOIN people ON stars.person_id = people.id
    WHERE name = 'Steve Carell';

SELECT title FROM shows, stars, people
    WHERE shows.id = stars.show_id
    AND people.id = stars.person_id
    AND name = 'Steve Carell';
-- Also brings duplicates
