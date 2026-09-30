/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonProperty$$get_ShouldSerialize
ENTRY_POINT: 04ffd834
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
Newtonsoft_Json_Serialization_JsonProperty__get_ShouldSerialize
          (long param_1,long param_2,undefined8 param_3,uint param_4)

{
  ushort uVar1;
  uint in_w9;
  ushort in_w10;
  undefined4 in_w11;
  ushort in_w12;
  
  *(undefined4 *)(param_2 + 8) = in_w11;
  *(undefined2 *)(param_2 + 0xc) = 0x78;
  uVar1 = (short)in_w9 + 0x57;
  if (in_w9 < 10) {
    uVar1 = in_w12 & 0xfff0 | (ushort)(param_4 >> 4) & 0xf;
  }
  *(ushort *)(param_2 + 0xe) = uVar1;
  uVar1 = (short)(param_4 & 0xf) + 0x57;
  if ((param_4 & 0xf) < 10) {
    uVar1 = in_w10 & 0xfff0 | (ushort)param_4 & 0xf;
  }
  *(ushort *)(param_1 + 0x10) = uVar1;
  return 9;
}


