#include "michael_print.h"

void michael_print_address_space(struct address_space *as) {
  michaelpx("");
  michaelp("  host = %x\n", (unsigned)as->host);
  /* TODO: print the radix tree*/
  michaelp("  nrpages = %lx\n", as->nrpages);
  michaelp("  nrshadows = %lx\n", as->nrshadows);
  michaelp("  writeback_index = %lx\n", as->writeback_index);
  michaelp("  flags = %lx\n", as->flags);
  michaelp("  private_data = %x\n", (unsigned)as->private_data);
}

void michael_print_writeback_control(struct writeback_control *wbc) {
  michaelpx("wbc = %x\n", (unsigned)wbc);
  michaelp("   nr_to_write = %lx\n", wbc->nr_to_write);
  michaelp("   pages_skipped = %lx\n", wbc->pages_skipped);
  michaelp("   range_start = %llx\n", wbc->range_start);
  michaelp("   range_end = %llx\n", wbc->range_end);
  michaelp("   sync_mode = %x\n", wbc->sync_mode);
  michaelp("   for_kupdate = %x\n", wbc->for_kupdate);
  michaelp("   for_background = %x\n", wbc->for_background);
  michaelp("   tagged_writepages = %x\n", wbc->tagged_writepages);
  michaelp("   for_reclaim = %x\n", wbc->for_reclaim);
  michaelp("   range_cyclic = %x\n", wbc->range_cyclic);
  michaelp("   for_sync = %x\n", wbc->for_sync);
};

void michael_print_pagevec(struct pagevec *v) {
  michaelpx("v = %x\n", (unsigned)v);
  michaelp(" nr  = %lx\n", v->nr);
  michaelp(" cold  = %lx\n", v->cold);
}

void michael_print_extent_map(struct extent_map *em) {
  michaelpx("em = %x\n", (unsigned)em);
  michaelp("  start = %llx\n", em->start);
  michaelp("  len = %llx\n", em->len);
  michaelp("  mod_start = %llx\n", em->mod_start);
  michaelp("  mod_len = %llx\n", em->mod_len);
  michaelp("  orig_start = %llx\n", em->orig_start);
  michaelp("  orig_block_len = %llx\n", em->orig_block_len);
  michaelp("  ram_bytes = %llx\n", em->ram_bytes);
  michaelp("  block_start = %llx\n", em->block_start);
  michaelp("  block_len = %llx\n", em->block_len);
  michaelp("  generation = %llx\n", em->generation);
  michaelp("  flags = %lx\n", em->flags);
  michaelp("  compress_type = %x\n", em->compress_type);
}

