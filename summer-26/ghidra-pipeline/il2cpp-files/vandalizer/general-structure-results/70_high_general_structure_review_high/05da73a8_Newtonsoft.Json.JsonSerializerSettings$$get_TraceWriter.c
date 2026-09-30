/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_TraceWriter
ENTRY_POINT: 05da73a8
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__get_TraceWriter(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
                    /* try { // try from 05da73a8 to 05ea742f has its CatchHandler @ 05da74fc */
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = *(uint *)(lVar4 + 0x18);
  param_2 = *(int *)(param_1 + 0x18) + param_2;
  iVar3 = 0;
  if (uVar1 != 0) {
    iVar3 = param_2 / (int)uVar1;
  }
  uVar2 = param_2 - iVar3 * uVar1;
  if (uVar2 < uVar1) {
    return *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


