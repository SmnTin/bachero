# Bachero

2d game engine based on SDL2 with a custom physics engine that is able to handle thousands of objects without a performance drop.

![preview](preview.gif)

## Physics engine

The physics engine is similar to [Box2d](https://box2d.org/). During the broad phase it uses [AABB tree](https://www.azurefromthetrenches.com/introductory-guide-to-aabb-tree-collision-detection/) to efficiently reduce the number of pairs of objects to check. It then calculates contact points to correctly figure out how to set collided objects aside. The engine also accounts for friction between objects and the background surface.

You can turn on the debug mode by pressing `]` on the keyboard and see objects colliders (green boxes), anchor and contact points (red dots), and bounding boxes of AABB tree nodes (blue boxes):
![debug preview](debug_preview.gif)



## Dependencies

You must have [SDL2](http://www.libsdl.org/) installed. For example, on MacOS you can install it the following way:
```bash
$ brew install sdl2
```

All other dependencies are either included in the sources or automatically downloaded (like [GTest](https://github.com/google/googletest)).

## Building

The project uses [CMake](https://cmake.org/) as a build system. Therefore, the build process is straightforward:
```bash
$ mkdir build && cd build
$ cmake .. && make
```

To execute tests, run from the project root:
```bash
$ build/test
```


