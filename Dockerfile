FROM gcc:latest

COPY . /app
WORKDIR /app

RUN g++ -o calculator calculator.cpp 

CMD ["./calculator"]
