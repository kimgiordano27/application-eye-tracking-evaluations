/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$GetContract
ENTRY_POINT: 0675d338
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__GetContract(void)

{
  uint unaff_w19;
  undefined8 *unaff_x20;
  undefined8 unaff_x26;
  ulong in_stack_00000008;
  long in_stack_00000028;
  
  if ((in_stack_00000008 & 0x100000000) == 0) {
    *(undefined4 *)(in_stack_00000028 + 4) = 0;
  }
  if ((unaff_w19 >> 4 & 1) == 0) {
    FUN_0675fcb8(in_stack_00000028,0,0);
  }
  *unaff_x20 = unaff_x26;
  return 1;
}


