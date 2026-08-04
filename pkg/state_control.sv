package state_control;

	typedef enum [2:0]
	{
		IDLE = 3'b000,
		CMD_PARSE = 3'b001,
		FILL_BUFFER = 3'b010,
		DRAIN_BUFFER = 3'b011,
		EXEC_ENCRYPT = 3'b100,
		DONE = 3'b101
	} state_t;
	
	typedef enum [2:0]
	{
		IDLE_CRYPT,
		RECEPTION,
		ENCRYPT,
		SIMON_ENCRYPT,
		TRANSMISSION,
		DONE_CRYPT
	} encrypt_state;

endpackage
