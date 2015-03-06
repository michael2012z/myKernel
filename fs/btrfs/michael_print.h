#ifndef __BTRFS_MICHAEL_PRINT__
#define __BTRFS_MICHAEL_PRINT__

#include <linux/types.h>
#include <linux/pagevec.h>
#include <linux/writeback.h>
#include "extent_map.h"

void michael_print_address_space(struct address_space *as);
void michael_print_writeback_control(struct writeback_control *wbc);
void michael_print_pagevec(struct pagevec *v);
void michael_print_extent_map(struct extent_map *em);

#endif /* __BTRFS_MICHAEL_PRINT__ */
