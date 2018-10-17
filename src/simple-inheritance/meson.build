inc = include_directories(
    '.',
)

sources = [
    'main.c',
    'parent.c',
    'child.c',
]

exe = executable('simple', sources, include_directories : inc)

test('basic', exe)
