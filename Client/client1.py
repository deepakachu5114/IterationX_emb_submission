import asyncio
import websockets
import time

async def task(websocket,name,text):
    n=0
    flag=0
    start=time.time()              
    while True:
        try:
            array=await websocket.recv()
            text.write(f'{array} : {time.time()}\n')
            n+=1
            if n%5==0:
                stop=time.time()
                if flag ==0:
                    stop+=2
                if n/5==1:
                    post='st'
                elif n/5==2:
                    post='nd'
                elif n/5==3:
                    post='rd'
                else:
                    post='th'
                await websocket.send(f'Client:{name} recieved the {n/5}{post} block in {stop-start}seconds')
                start=time.time()
                flag=1
                text.write('\n\n')
        except websockets.ConnectionClosed:
            text.write('\n'+'-'*10+'ConnectionClosed'+'-'*10+'\n')
            break
            
async def client(name):
    text=open(f'{name}.txt','w')
    async for websocket in websockets.connect('ws://localhost:6969'):
        try:
            await asyncio.gather(asyncio.create_task(task(websocket,name,text)))
        except websockets.exceptions.ConnectionClosedError:
            continue
asyncio.run(client('client1'))
