project(
  'string_cast',
  'cpp',
  version: '2.0.1',
  meson_version: '>=0.63.0',
  default_options: ['cpp_std=c++20', 'werror=true', 'warning_level=3'])

string_cast_library = library(
  'string_cast',
  sources: ['source/string_cast.cpp'],
  include_directories: include_directories('include/string_cast')
)

string_cast_library_dependency = declare_dependency(
  include_directories: include_directories('include'),
  link_with: string_cast_library
)

test(
  'string_cast',
  executable(
    'string_cast_test',
    sources: ['test/test.cpp'],
    dependencies: [string_cast_library_dependency]
  )
)
