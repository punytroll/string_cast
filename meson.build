project(
  'string_cast',
  'cpp',
  version: '2.1.0',
  meson_version: '>=1.8.2',
  default_options: {
    'cpp_std': 'c++23',
    'warning_level': '3',
    'werror': true
  }
)

string_cast_library = library(
  'string_cast',
  sources: ['source/string_cast.cpp'],
  include_directories: [include_directories('include/string_cast')]
)

string_cast_library_dependency = declare_dependency(
  include_directories: [include_directories('include')],
  link_with: [string_cast_library]
)

test(
  'string_cast',
  executable(
    'string_cast_test',
    sources: ['testing/test_suite.cpp'],
    dependencies: [string_cast_library_dependency]
  )
)
