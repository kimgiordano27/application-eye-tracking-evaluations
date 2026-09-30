/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 02754808
PROGRAM: vrlegs-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined4 uVar2;
  long unaff_x21;
  long *unaff_x22;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000018;
  
  *(undefined1 *)(unaff_x20 + 0x1cf) = 1;
  if (unaff_x21 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_025bb98c();
    uVar2 = *(undefined4 *)(unaff_x21 + 0x10);
  }
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  FUN_02751efc(in_stack_00000018,uVar1,uVar2,in_stack_00000000);
  return;
}


