/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_ShouldDeserialize
ENTRY_POINT: 04ffd844
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonProperty__get_ShouldDeserialize
          (long param_1,long param_2,undefined8 param_3,ushort param_4)

{
  short sVar1;
  ushort uVar2;
  uint in_w9;
  ushort in_w10;
  short in_w12;
  
  sVar1 = (short)in_w9 + 0x57;
  if (in_w9 < 10) {
    sVar1 = in_w12;
  }
  *(short *)(param_2 + 0xe) = sVar1;
  uVar2 = (param_4 & 0xf) + 0x57;
  if ((param_4 & 0xf) < 10) {
    uVar2 = in_w10 & 0xfff0 | param_4 & 0xf;
  }
  *(ushort *)(param_1 + 0x10) = uVar2;
  return 9;
}


