def main():
    hello("world")
    goodbye("world")


def hello(name):
    print(f"hello , {name}")


def goodbye(name):
    print(f"goodbye, {name}")


if __name__ == "__main__": #do not call while importing this to other automatically
    main()