
void set_main_module();
void add_instrument_range(ADDRINT start, ADDRINT end);
void add_instrument_inside(ADDRINT start, ADDRINT end);
void add_instrument_module(const char *modname);
void module_range_handler(IMG img, void *v);

int is_accepted_address(INS ins);
