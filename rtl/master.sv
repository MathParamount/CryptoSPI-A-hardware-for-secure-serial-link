module master_send (input logic sck, input logic reset);
	
	wire start;

	wire sdo;
	wire sdi;
	wire sck_wire;
	wire ss;
	
	wire miso;
	wire data_out;
	
	reg [15:0] sr;
	reg [15:0] buffer_read;
	reg [15:0] buffer_write;
	
	//general syncronos block
	always_ff @(posedge sck) begin
		
		//shifter register
		
		//transmition
		always_ff @(posedge sck)
			begin
				if(start) begin
					sr <= {sr[15:0],data_out};
				end
			end
			
		//reception
		always_ff @(posedge sck)
			begin
				if(ready) begin
					sr <= {sr[15:0], miso};
				end
			end

		//buffer
		always_ff @(posedge sck)
		begin
				//read
				if(ss == 1) begin
					buffer_write <= sr;
				end
				else 
					buffer_read <= sr;
				end
			end
		end

		//control block
		always_ff @(posedge sck)
		begin
			sck_wire <= sck;
			
		end
	end

endmodule
