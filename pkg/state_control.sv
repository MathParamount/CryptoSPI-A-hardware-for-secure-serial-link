package state_control;

	typedef enum [2:0]
	{
		IDLE = 3'b000,
		CMD_PARSE = 3'b001,
		FILL_BUFFER = 3'b010,
		DRAIN_BUFFER = 3'b011,
		DONE = 3'b100
	} state_t;

endpackage
