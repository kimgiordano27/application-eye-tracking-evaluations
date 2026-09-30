/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$GetErrorContext
ENTRY_POINT: 074b1e58
PROGRAM: cac-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext(void)

{
  short sVar1;
  short *unaff_x19;
  uint unaff_w20;
  undefined8 in_stack_00000008;
  
  sVar1 = (short)((ulong)in_stack_00000008 >> 0x20);
  if ((unaff_w20 >> 9 & 1) == 0) {
    if (in_stack_00000008._4_4_ == (int)sVar1) {
LAB_074b1e78:
      *unaff_x19 = sVar1;
      return 1;
    }
  }
  else if (in_stack_00000008._4_4_ < 0x10000) goto LAB_074b1e78;
  return 0;
}


