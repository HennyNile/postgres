SELECT MIN(cn.name) AS movie_company,
       MIN(mi_idx.info) AS rating,
       MIN(t.title) AS drama_horror_movie
FROM company_name AS cn, 1
     company_type AS ct, 2
     info_type AS it1, 4
     info_type AS it2, 8
     movie_companies AS mc, 16
     movie_info AS mi, 32
     movie_info_idx AS mi_idx, 64
     title AS t 128
WHERE cn.country_code = '[us]'
  AND ct.kind = 'production companies'
  AND it1.info = 'genres'
  AND it2.info = 'rating'
  AND mi.info IN ('Drama',
                  'Horror')
  AND mi_idx.info > '8.0'
  AND t.production_year BETWEEN 2005 AND 2008
  AND t.id = mi.movie_id
  AND t.id = mi_idx.movie_id
  AND mi.info_type_id = it1.id
  AND mi_idx.info_type_id = it2.id
  AND t.id = mc.movie_id
  AND ct.id = mc.company_type_id
  AND cn.id = mc.company_id
  AND mc.movie_id = mi.movie_id
  AND mc.movie_id = mi_idx.movie_id
  AND mi.movie_id = mi_idx.movie_id;

