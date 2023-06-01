#pragma once
#include <stdint.h>

// language int aliases
using uint = unsigned int;
using ulong = unsigned long;
using ulonglong = unsigned long long;

// signed int aliases
using i8 = int8_t;
using i16 = int16_t;
using i32 = int32_t;
using i64 = int64_t;

// unsigned int aliases
using u8 = uint8_t;
using u16 = uint16_t;
using u32 = uint32_t;
using u64 = uint64_t;

// float aliases
using f32 = float;
using f64 = double;

// char aliases
using wchar = wchar_t;  // 16 bits on Windows, 32 on most other operating systems.
using char8 = char8_t;  // UTF-8 char
using char16 = char16_t; // UTF-16 char
using char32 = char32_t; // UTF-32 char

// Ptr arithmetic
using ptrdiff = ptrdiff_t;
using intptr = intptr_t;
using uintptr = uintptr_t;

// Language defined size types
using size_t = decltype(sizeof(0)); // Declares platform's size type; 64 bits on all supported platforms
using ssize_t = int64_t; // Signed version of platform's size type; named ssize_t to distinguish from isize

// Engine size types.
using usize = size_t;  // Engine's internal unsigned size type
using isize = ssize_t; // Engine's internal signed size type

// Static asserts to ensure basic initial conditions are met.
static_assert(sizeof(void*) == 8, "Only 64-bit architectures are supported.");
static_assert(sizeof(ptrdiff) == 8, "Only 64-bit architectures are supported. Ptrdiff must be 8 bytes.");
static_assert(sizeof(intptr) == 8, "Only 64-bit architectures are supported. Inptr must be 8 bytes.");
static_assert(sizeof(uintptr) == 8, "Only 64-bit architectures are supported. Uintptr must be 8 bytes.");

static_assert(sizeof(ssize_t) == 8, "Invalid type size: ssize_t");
static_assert(sizeof(size_t) == 8, "Invalid type size: size_t");
static_assert(sizeof(size_t) == sizeof(ssize_t), "Signed and unsigned size types must be the same width.");

static_assert(sizeof(isize) == 8, "Invalid type size: isize");
static_assert(sizeof(usize) == 8, "Invalid type size: usize");
static_assert(sizeof(usize) == sizeof(isize), "Signed and unsigned size types must be the same width.");

static_assert(sizeof(i8) == 1, "Invalid type size: i8");
static_assert(sizeof(i16) == 2, "Invalid type size: i16");
static_assert(sizeof(i32) == 4, "Invalid type size: i32");
static_assert(sizeof(i64) == 8, "Invalid type size: i64");

static_assert(sizeof(u8) == 1, "Invalid type size: u8");
static_assert(sizeof(u16) == 2, "Invalid type size: u16");
static_assert(sizeof(u32) == 4, "Invalid type size: u32");
static_assert(sizeof(u64) == 8, "Invalid type size: u64");

static_assert(sizeof(f32) == 4, "Invalid type size: f32");
static_assert(sizeof(f64) == 8, "Invalid type size: f64");

static_assert(sizeof(char) == 1, "Invalid type size: char");
static_assert(sizeof(char8) == 1, "Invalid type size: char8");
static_assert(sizeof(char16) == 2, "Invalid type size: char16");
static_assert(sizeof(char32) == 4, "Invalid type size: char32");
