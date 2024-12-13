def mex(arr,N):
    arr.sort()
    mex = 0
    for i in range(N):
        if arr[i] == mex:
            mex += 1
    return mex

if __name__ == '__main__':
    arr = list(map(int,input("Enter values:").split()))
    N = len(arr)
    print(mex(arr,N))