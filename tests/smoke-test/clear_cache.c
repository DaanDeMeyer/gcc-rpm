int
main (void)
{
  char *mem = __builtin_alloca (40);
  __builtin___clear_cache (mem, mem + 40);
  return 0;
}
