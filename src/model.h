#include <iostream>
#include <openvino/c/openvino.h>

struct model {
    ov_core_t* core;
    ov_compiled_model_t* compiled_model;
    ov_infer_request_t* curr_request;
    ov_infer_request_t* next_request;
    ov_element_type_e input_type;
    ov_shape_t input_shape;
    ov_layout_t* input_layout;
}