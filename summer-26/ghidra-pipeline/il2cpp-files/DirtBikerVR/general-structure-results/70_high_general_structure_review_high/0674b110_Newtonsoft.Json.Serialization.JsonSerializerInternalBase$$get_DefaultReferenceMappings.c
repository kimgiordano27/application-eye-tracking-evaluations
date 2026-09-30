/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$get_DefaultReferenceMappings
ENTRY_POINT: 0674b110
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__get_DefaultReferenceMappings
          (ushort *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort in_w9;
  uint in_w10;
  
  uVar1 = (short)in_w10 + 0x57;
  if (in_w10 < 10) {
    uVar1 = in_w9 & 0xfff0 | (ushort)(param_2 >> 4) & 0xf;
  }
  uVar2 = param_3 >> 4 & 0xf;
  *param_1 = uVar1;
  uVar1 = (short)(param_2 & 0xf) + 0x57;
  if ((param_2 & 0xf) < 10) {
    uVar1 = (ushort)param_2 & 0xf | 0x30;
  }
  param_1[1] = uVar1;
  uVar1 = (short)uVar2 + 0x57;
  if (uVar2 < 10) {
    uVar1 = (ushort)(param_3 >> 4) & 0xf | 0x30;
  }
  param_1[2] = uVar1;
  uVar1 = (short)(param_3 & 0xf) + 0x57;
  if ((param_3 & 0xf) < 10) {
    uVar1 = (ushort)param_3 & 0xf | 0x30;
  }
  param_1[3] = uVar1;
  return 4;
}


