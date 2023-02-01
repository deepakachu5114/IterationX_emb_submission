import websockets
import asyncio
from numpy import random

async def rec(websockets):
    while True:
        message = await websockets.recv()
        print(f'Server :{message}')

async def send(websockets):
    while True:
        array=random.randint(100,size=(10))
        await websockets.send(str(array))
        await asyncio.sleep(2)
    
async def server(websockets):
    s=asyncio.create_task(send(websockets))
    r=asyncio.create_task(rec(websockets))
    await asyncio.gather(s,r)

async def main():
    async with websockets.serve(server,'localhost',6969):
        await asyncio.Future()

asyncio.run(main())
