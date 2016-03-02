# Dockerfile for building superpay binaries.

Now, you can build your own superpay files on all systems with docker and do it easy without installing depends on your system.

## How:

### Build docker image

```
sudo docker build .
```

### Run docker container

Builder will return HASH of image
Example:
Successfully built 9bbff825d50f

```
sudo docker run -it -v ~/path/to/superpay/folder:/superpay 9bbff825d50f
```

If your system uses SELINUX you may use --privileged=true key

```
sudo docker run --privileged=true -it -v ~/development/superpay:/superpay 9bbff825d50f
```

See superpay-qt file in used superpay folder and superpayd file in src subfolder.