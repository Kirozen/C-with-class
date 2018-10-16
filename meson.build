project('C with class', 'c', version: '1.0.0', default_options : ['warning_level=3', 'c_std=c11'])

inc = include_directories(
    'src',
)

sources = [
    'src/main.c',
    'src/parent.c',
    'src/child.c',
]

exe = executable('tester', sources, include_directories : inc, install : true)

test('basic', exe)
