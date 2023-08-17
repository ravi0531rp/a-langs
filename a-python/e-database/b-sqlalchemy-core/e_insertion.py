from sqlalchemy import insert
from c_tables import users_table
from b_connect import engine


if __name__ == "__main__":
    statement = insert(users_table).values(name="Ravi", fullname="Ravi Prakash")
    with engine.connect() as conn:
        conn.execute(statement)
        conn.commit()