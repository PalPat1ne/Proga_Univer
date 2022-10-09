import socket 
HOST = "127.0.0.1"
PORT = 5001
s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.bind((HOST,PORT))
s.listen(1)
conn,addr=s.accept()
print('соединение установленно')
while 1:
    data = conn.recv(1024)
    if not data:
        break
    else:
        print('Получена data')
    conn.send(data)
    print('Отправленна data')
conn.close()

