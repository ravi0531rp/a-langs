@app.get("/items/{item_id}")
```
curl -X 'GET' \
  'http://127.0.0.1:8000/items/5?q=something' \
  -H 'accept: application/json'
```

@app.get("/predict/{request_id}")
```
curl -X 'GET' \
  'http://127.0.0.1:8000/predict/AB67-9UY1-R13X-B239?num_rooms=4&num_halls=4&is_pool_present=true&format=true' \
  -H 'accept: application/json'
```

@app.post("/predict/")
```
curl -X 'POST' \
  'http://127.0.0.1:8000/predict/model1/AB67-9UY1-R13X-B239?format=True' \
  -H 'accept: application/json' \
  -H 'Content-Type: application/json' \
  -d '{
  "id": "A6SGYS7S6X7S8",
  "value": "970D, TOWER GALI, CHUNABHATTI ROAD, MALIGHAT, MUZAFFARPUR, BIHAR",
  "pin": 842002,
  "rooms": 4,
  "halls": 4,
  "is_pool_present": true
}'
```

@app.post("/address")
```
curl -X 'POST' \
  'http://127.0.0.1:8000/address' \
  -H 'accept: application/json' \
  -H 'Content-Type: application/json' \
  -d '{
  "id": "A6SGYS7S6X7S8",
  "value": "970D, TOWER GALI, CHUNABHATTI ROAD, MALIGHAT, MUZAFFARPUR, BIHAR",
  "pin": 842002,
  "rooms": 4,
  "halls": 1,
  "is_pool_present": false
}'
```