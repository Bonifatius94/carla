import glob
import os
import sys

try:
    sys.path.append(glob.glob('../carla/dist/carla-*%d.%d-%s.egg' % (
        sys.version_info.major,
        sys.version_info.minor,
        'win-amd64' if os.name == 'nt' else 'linux-x86_64'))[0])
except IndexError:
    pass

import carla

import random
import time

def main():
    actor_list = []

    try:
        client = carla.Client('localhost', 2000)
        client.set_timeout(2.0)

        world = client.get_world()

        blueprint_library = world.get_blueprint_library()

        bp = random.choice(blueprint_library.filter('scoomatic'))

        location = carla.Location(x=20.0, y=-3.0, z=1.5)
        rotation = carla.Rotation(pitch=0.0, roll=0.0, yaw=0.0)

        transform = carla.Transform(location, rotation)

        scoomatic = world.spawn_actor(bp, transform)

        actor_list.append(scoomatic)
        print('created %s' % scoomatic.type_id)

        scoomatic_control = carla.ScoomaticControl()
        scoomatic_control.left_velocity = 10.0

        scoomatic.apply_control(scoomatic_control)

        time.sleep(10)

    finally:
        print('destroying actors')
        client.apply_batch([carla.command.DestroyActor(x) for x in actor_list])
        print('done.')


if __name__ == '__main__':

    main()