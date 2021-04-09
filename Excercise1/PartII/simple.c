#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/hash.h>
#include <linux/gcd.h>

static int simple_init(void)
{
       printk(KERN_INFO "%lu\n", GOLDEN_RATIO_PRIME);
       return 0;
}


static void simple_exit(void) {
	unsigned long result = gcd(3300, 24);
	printk(KERN_INFO "gcd(3300, 24) = %lu\n", result);
}

module_init( simple_init );
module_exit( simple_exit );

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");
