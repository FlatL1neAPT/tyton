#include "core.h"
#include "syscall_hooks.h"
#include "netfilter_hooks.h"

static int __init init_mod(void){
	printk(KERN_INFO "[TYTON] Inserting module\n");
	analyze_syscalls();
	analyze_netfilter();
	return 0;
}

static void __exit exit_mod(void){
	printk(KERN_INFO "[TYTON] Exiting module\n");
}

module_init(init_mod);
module_exit(exit_mod);
