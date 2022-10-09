import socket 
HOST = "127.0.0.1"
PORT = 5001
s = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
s.connect((HOST,PORT))
data = "hello world"
s.send(data.encode('utf-8'))
print('отправленна дата')
data = s.recv(1024)
s.close()
print('Получена дата')
