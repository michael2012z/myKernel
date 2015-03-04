#include "michael_print.h"

void michael_print_address_space(struct address_space *as) {
  michaelpx("");
  michaelp("  host = %x\n", as->host);
  /* TODO: print the radix tree*/
  michaelp("  nrpages = %x\n", as->nrpages);
  michaelp("  nrshadows = %x\n", as->nrshadows);
  michaelp("  writeback_index = %x\n", as->writeback_index);
  michaelp("  flags = %x\n", as->flags);
  michaelp("  private_data = %x\n", as->private_data);
}

void michael_print_writeback_control(struct writeback_control *wbc) {
  michaelpx("wbc = %x\n", wbc);
  michaelp("   nr_to_write = %x\n", wbc->nr_to_write);
  michaelp("   pages_skipped = %x\n", wbc->pages_skipped);
  michaelp("   range_start = %x\n", wbc->range_start);
  michaelp("   range_end = %x\n", wbc->range_end);
  michaelp("   sync_mode = %x\n", wbc->sync_mode);
  michaelp("   for_kupdate = %x\n", wbc->for_kupdate);
  michaelp("   for_background = %x\n", wbc->for_background);
  michaelp("   tagged_writepages = %x\n", wbc->tagged_writepages);
  michaelp("   for_reclaim = %x\n", wbc->for_reclaim);
  michaelp("   range_cyclic = %x\n", wbc->range_cyclic);
  michaelp("   for_sync = %x\n", wbc->for_sync);
};

void michael_print_pagevec(struct pagevec *v) {
  michaelpx("v = %x\n", v);
  michaelp(" nr  = %x\n", v->nr);
  michaelp(" cold  = %x\n", v->cold);
}

void michael_print_extent_map(struct extent_map *em) {
  michaelpx("em = %x\n", em);
  michaelp("  start = %x\n", em->start);
  michaelp("  len = %x\n", em->len);
  michaelp("  mod_start = %x\n", em->mod_start);
  michaelp("  mod_len = %x\n", em->mod_len);
  michaelp("  orig_start = %x\n", em->orig_start);
  michaelp("  orig_block_len = %x\n", em->orig_block_len);
  michaelp("  ram_bytes = %x\n", em->ram_bytes);
  michaelp("  block_start = %x\n", em->block_start);
  michaelp("  block_len = %x\n", em->block_len);
  michaelp("  generation = %x\n", em->generation);
  michaelp("  flags = %x\n", em->flags);
  michaelp("  compress_type = %x\n", em->compress_type);
}

