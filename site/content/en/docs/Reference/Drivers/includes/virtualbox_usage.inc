## Requirements

- [VirtualBox](https://www.virtualbox.org/wiki/Downloads) 5.2 or higher

## Usage

Start a cluster using the virtualbox driver:

```shell
minikube start --vm-driver=virtualbox
```
To make virtualbox the default driver:

```shell
minikube config set vm-driver virtualbox
```
