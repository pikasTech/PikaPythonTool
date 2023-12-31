/*
 * [Warning!] This file is auto-generated by pika compiler.
 * Do not edit it manually.
 * The source code is *.pyi file.
 * More details: 
 * English Doc:
 * https://pikadoc.readthedocs.io/en/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 * Chinese Doc:
 * https://pikadoc.readthedocs.io/zh/latest/PikaScript%20%E6%A8%A1%E5%9D%97%E6%A6%82%E8%BF%B0.html
 */

#ifndef __builtins__H
#define __builtins__H
#include <stdio.h>
#include <stdlib.h>
#include "PikaObj.h"

PikaObj *New_builtins(Args *args);

Arg* builtins_ArithmeticError(PikaObj *self);
Arg* builtins_AssertionError(PikaObj *self);
Arg* builtins_AttributeError(PikaObj *self);
Arg* builtins_BaseException(PikaObj *self);
Arg* builtins_BlockingIOError(PikaObj *self);
Arg* builtins_BrokenPipeError(PikaObj *self);
Arg* builtins_BufferError(PikaObj *self);
Arg* builtins_BytesWarning(PikaObj *self);
Arg* builtins_ChildProcessError(PikaObj *self);
Arg* builtins_ConnectionAbortedError(PikaObj *self);
Arg* builtins_ConnectionError(PikaObj *self);
Arg* builtins_ConnectionRefusedError(PikaObj *self);
Arg* builtins_ConnectionResetError(PikaObj *self);
Arg* builtins_DeprecationWarning(PikaObj *self);
Arg* builtins_EOFError(PikaObj *self);
Arg* builtins_Exception(PikaObj *self);
Arg* builtins_FileExistsError(PikaObj *self);
Arg* builtins_FileNotFoundError(PikaObj *self);
Arg* builtins_FloatingPointError(PikaObj *self);
Arg* builtins_FutureWarning(PikaObj *self);
Arg* builtins_GeneratorExit(PikaObj *self);
Arg* builtins_ImportError(PikaObj *self);
Arg* builtins_ImportWarning(PikaObj *self);
Arg* builtins_IndentationError(PikaObj *self);
Arg* builtins_IndexError(PikaObj *self);
Arg* builtins_InterruptedError(PikaObj *self);
Arg* builtins_IsADirectoryError(PikaObj *self);
Arg* builtins_KeyError(PikaObj *self);
Arg* builtins_KeyboardInterrupt(PikaObj *self);
Arg* builtins_LookupError(PikaObj *self);
Arg* builtins_MemoryError(PikaObj *self);
Arg* builtins_ModuleNotFoundError(PikaObj *self);
Arg* builtins_NameError(PikaObj *self);
Arg* builtins_NotADirectoryError(PikaObj *self);
Arg* builtins_NotImplementedError(PikaObj *self);
Arg* builtins_OSError(PikaObj *self);
Arg* builtins_OverflowError(PikaObj *self);
Arg* builtins_PendingDeprecationWarning(PikaObj *self);
Arg* builtins_PermissionError(PikaObj *self);
Arg* builtins_ProcessLookupError(PikaObj *self);
Arg* builtins_RangeObj(PikaObj *self);
Arg* builtins_RecursionError(PikaObj *self);
Arg* builtins_ReferenceError(PikaObj *self);
Arg* builtins_ResourceWarning(PikaObj *self);
Arg* builtins_RuntimeError(PikaObj *self);
Arg* builtins_RuntimeWarning(PikaObj *self);
Arg* builtins_StopAsyncIteration(PikaObj *self);
Arg* builtins_StopIteration(PikaObj *self);
Arg* builtins_StringObj(PikaObj *self);
Arg* builtins_SyntaxError(PikaObj *self);
Arg* builtins_SyntaxWarning(PikaObj *self);
Arg* builtins_SystemError(PikaObj *self);
Arg* builtins_SystemExit(PikaObj *self);
Arg* builtins_TabError(PikaObj *self);
Arg* builtins_TimeoutError(PikaObj *self);
Arg* builtins_TypeError(PikaObj *self);
Arg* builtins_UnboundLocalError(PikaObj *self);
Arg* builtins_UnicodeDecodeError(PikaObj *self);
Arg* builtins_UnicodeEncodeError(PikaObj *self);
Arg* builtins_UnicodeError(PikaObj *self);
Arg* builtins_UnicodeTranslateError(PikaObj *self);
Arg* builtins_UnicodeWarning(PikaObj *self);
Arg* builtins_UserWarning(PikaObj *self);
Arg* builtins_ValueError(PikaObj *self);
Arg* builtins_Warning(PikaObj *self);
Arg* builtins_ZeroDivisionError(PikaObj *self);
Arg* builtins___getitem__(PikaObj *self, Arg* obj, Arg* key);
Arg* builtins___setitem__(PikaObj *self, Arg* obj, Arg* key, Arg* val);
Arg* builtins_abs(PikaObj *self, Arg* val);
pika_bool builtins_bool(PikaObj *self, Arg* arg);
Arg* builtins_bytes(PikaObj *self, Arg* val);
char* builtins_cformat(PikaObj *self, char* fmt, PikaTuple* var);
char* builtins_chr(PikaObj *self, int val);
void builtins_clear(PikaObj *self);
Arg* builtins_dict(PikaObj *self, PikaTuple* val);
PikaObj* builtins_dir(PikaObj *self, Arg* obj);
Arg* builtins_eval(PikaObj *self, char* code);
void builtins_exec(PikaObj *self, char* code);
void builtins_exit(PikaObj *self);
pika_float builtins_float(PikaObj *self, Arg* arg);
void builtins_gcdump(PikaObj *self);
Arg* builtins_getattr(PikaObj *self, PikaObj* obj, char* name);
int builtins_hasattr(PikaObj *self, PikaObj* obj, char* name);
void builtins_help(PikaObj *self, char* name);
char* builtins_hex(PikaObj *self, int val);
int builtins_id(PikaObj *self, Arg* obj);
char* builtins_input(PikaObj *self, PikaTuple* info);
int builtins_int(PikaObj *self, Arg* arg, PikaTuple* base);
pika_bool builtins_isinstance(PikaObj *self, Arg* object, Arg* classinfo);
Arg* builtins_iter(PikaObj *self, Arg* arg);
int builtins_len(PikaObj *self, Arg* arg);
Arg* builtins_list(PikaObj *self, PikaTuple* val);
Arg* builtins_max(PikaObj *self, PikaTuple* val);
Arg* builtins_min(PikaObj *self, PikaTuple* val);
Arg* builtins_object(PikaObj *self);
PikaObj* builtins_open(PikaObj *self, char* path, char* mode);
int builtins_ord(PikaObj *self, char* val);
void builtins_print(PikaObj *self, PikaTuple* val, PikaDict* ops);
Arg* builtins_range(PikaObj *self, PikaTuple* ax);
void builtins_reboot(PikaObj *self);
void builtins_setattr(PikaObj *self, PikaObj* obj, char* name, Arg* val);
char* builtins_str(PikaObj *self, Arg* arg);
Arg* builtins_tuple(PikaObj *self, Arg* arg);
Arg* builtins_type(PikaObj *self, Arg* arg);

#endif
