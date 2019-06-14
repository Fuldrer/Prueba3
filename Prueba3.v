module Prueba3(
    output count,
    input [7:0]n
);

    wire reg count_;
    wire reg [7:0]n_;

    assign n_ = n;
    assign count_ = 0;


    always @ (*) begin
        assign n_ = (n_ >> 4'b0);
        assign count_ = (count_ + 1);
    end

    assign count = count_;

endmodule