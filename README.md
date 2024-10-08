# Corax Template

This is a Template to create Crow applications.

## Requirements:

- Boost 1.8x
- CrowCpp v.1.0+
- Cmake 3.10+

## How to setup

Install all the dependencies using your preferred package Manager, if you are using Mac OS, you can use `brew` to install `boost` and `cmake`.

- `mkdir libs && cd libs`
- Clone The CrowCpp Repo: `git clone https://github.com/CrowCpp/Crow.git`
- `cd ..`

## How to compile and run corax

- `mkdir build`
- `cd scripts && ./make.sh`
- `./compile.sh`
- `cd ../release/bin/ && ./corax`