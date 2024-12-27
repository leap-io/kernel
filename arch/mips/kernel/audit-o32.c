#define __WANT_SYSCALL_NUMBERS _MIPS_SIM_ABI32

#include <linux/init.h>
#include <linux/types.h>
#include <linux/audit.h>
#include <linux/unistd.h>
#include "audit-o32.h"

static unsigned dir_class_o32[] = {
#include <asm-generic/audit_dir_write.h>
~0U
};

static unsigned read_class_o32[] = {
#include <asm-generic/audit_read.h>
~0U
};

static unsigned write_class_o32[] = {
#include <asm-generic/audit_write.h>
~0U
};

static unsigned chattr_class_o32[] = {
#include <asm-generic/audit_change_attr.h>
~0U
};

static unsigned signal_class_o32[] = {
#include <asm-generic/audit_signal.h>
~0U
};

int audit_classify_syscall_o32(int abi, unsigned syscall)
{
	switch (syscall) {
	case __NR_open:
		return AUDITSC_OPEN;
	case __NR_openat:
		return AUDITSC_OPENAT;
	case __NR_socketcall:
		return AUDITSC_SOCKETCALL;
	case __NR_execve:
		return AUDITSC_EXECVE;
	default:
		return AUDITSC_NATIVE;
	}
}

static int __init audit_classes_o32_init(void)
{
	audit_register_class(AUDIT_CLASS_WRITE_32, write_class_o32);
	audit_register_class(AUDIT_CLASS_READ_32, read_class_o32);
	audit_register_class(AUDIT_CLASS_DIR_WRITE_32, dir_class_o32);
	audit_register_class(AUDIT_CLASS_CHATTR_32, chattr_class_o32);
	audit_register_class(AUDIT_CLASS_SIGNAL_32, signal_class_o32);

	return 0;
}

__initcall(audit_classes_o32_init);
