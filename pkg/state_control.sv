package state_control;

	typedef enum [1:0]
	{
		IDLE = 2'b00,
		DECISION = 2'b01,
		DONE = 2'b10
	} state_t;

endpackage
