/*ofd.c -Our First Driver Codr */
#include<linux/module.h>
#include<linux/version.h>
#include<linux/kernel.h>

static int __init ofd_init(void) /*Constructor */
{
	printk(KERN_INFO "Hi: ofd registered");
	return 0;
}

static void __exit ofd_exit(void) /*Destructor*/
{
	printk(KERN_INFO "Bye: ofd unregistered");
}

module_init(ofd_init);
module_exit(ofd_exit);

MODULE_LICENSR("GPL");
MODULE_AUTHOR("Siva KUmar");
MODULE_DESCRIPTION("Our First Driver");

