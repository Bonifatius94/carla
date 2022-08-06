
# Dockerized Scoomatic Setup

## About
This tutorial shows how to build the scoomatic vehicle as Docker container.

## Prerequisites

### Machine Setup and Requirements

| REquirement | Description |
| ----------- | ----------- |
| Free Disk Space: | ~ 200-300 GB |
| Available RAM:   |    16 GB |
| CPU:             | as many cores as possible, build is really resource-intensive |
| Suggested OS:    | Ubuntu 18.04 |

### Unreal Engine GitHub Access
1) Register as Unreal developer to access the Unreal Engine GitHub repositories (required for CARLA source build)
2) Create a GitHub personal access token for login (pull the Unreal Engine repo)
see GitHub docs https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/creating-a-personal-access-token

### OS Setup
Install the latest updates.

```sh
sudo apt-get update && sudo apt-get upgrade -y
reboot
```

### Python Version (3.6 or higher)
Check for the Python version related to the 'python3' command:

```sh
python3 --version
```

This should return 3.6 or higher.

### Install Docker

```sh
sudo apt-get update && sudo apt-get install -y docker.io
sudo usermod -aG docker $USER && reboot
```

Set up NVIDIA Docker tools as well,
see https://github.com/ll7/paf21-1/wiki/Development-Machine-Setup-(NVIDIA-Docker)

## Setup Steps
This tutorial is following the steps from
https://github.com/carla-simulator/carla/blob/master/Util/Docker/README.md,
but there are some twitsts to fix the inconsistencies.

### Unreal Engine Docker Tools Setup
Set up the Unreal Engine Docker build environment.

```sh
python3 -m pip install ue4-docker
ue4-docker setup
```

### Clone the CARLA Source Code

```sh
CARLA_REPO=https://github.com/ll7/carla
CARLA_BRANCH=ll7/scoomatic/0.9.13/simple-reimp

git clone $CARLA_REPO --depth=1 -b $CARLA_BRANCH
cd carla
```

### Docker Image Build

```sh
GITHUB_USERNAME=....
GITHUB_ACCESS_TOKEN=....

docker build -t carla-prerequisites \
    --build-arg EPIC_USER=$GITHUB_USERNAME \
    --build-arg EPIC_PASS=$GITHUB_ACCESS_TOKEN \
    -f Util/Docker/Prerequisites.Dockerfile .

docker build -t carla:latest -f Util/Docker/Carla.Dockerfile-mod .
```

## Simulating The Vehicle

### Launching The Simulator

```sh
docker run --privileged --gpus all \
    --net=host -e 2000-2002 \
    -v /tmp/.X11-unix:/tmp/.X11-unix:rw \
    carla:latest -RenderOffScreen
```

### Remote-Control Via Python

Launch another container of the CARLA simulator as PythonAPI client:

```sh
docker run -it --net=host --entrypoint=bash carla:latest
# TODO: figure out how to display the pygame to UI
```

Check if the carla package can be imported:

```sh
export PYTHONPATH=$PWD/PythonAPI/carla:$PWD/PythonAPI/carla/dist/carla-0.9.13-py3.6-linux-x86_64.egg

python3 -c 'import carla'
if [ $? -eq 0 ]; then echo 'carla import successful!'; fi
```

Spawn a new vehicle and control it via the keyboard:

```sh
VEHICLE_NAME_WILDCARD=*scoomatic*

cd PythonAPI/examples
python3 manual_control.py --filter $VEHICLE_NAME_WILDCARD
```

## Author
Marco Tröster, 2022-08
