FROM python

WORKDIR '/app'

COPY ./requirements.txt ./

RUN python3 -m pip install -r requirements.txt

EXPOSE 5000

CMD uvicorn main:app --port 5000 --reload

