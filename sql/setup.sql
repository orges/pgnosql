CREATE ROLE pgnosql WITH SUPERUSER CREATEDB CREATEROLE LOGIN ENCRYPTED PASSWORD '123123';

CREATE DATABASE pgnosql
  WITH OWNER = pgnosql
       ENCODING = 'UTF8'
       TABLESPACE = pg_default
       LC_COLLATE = 'en_US.UTF-8'
       LC_CTYPE = 'en_US.UTF-8'
       CONNECTION LIMIT = -1;


