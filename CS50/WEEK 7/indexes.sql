-- Indexes prepare the data for use
.time ON
SELECT * FROM shows WHERE title = 'The Office';

CREATE INDEX title_idex ON shows(title); 
SELECT * FROM shows WHERE title = 'The Office';

