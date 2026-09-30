/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_SerializationBinder
ENTRY_POINT: 05da73b0
PROGRAM: vandalizer-libil2cpp.so
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
Newtonsoft_Json_JsonSerializerSettings__get_SerializationBinder
          (long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  param_3 = *(int *)(param_2 + 0x18) + param_3;
  iVar3 = 0;
  if (uVar1 != 0) {
    iVar3 = param_3 / (int)uVar1;
  }
  uVar2 = param_3 - iVar3 * uVar1;
  if (uVar2 < uVar1) {
    return *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


