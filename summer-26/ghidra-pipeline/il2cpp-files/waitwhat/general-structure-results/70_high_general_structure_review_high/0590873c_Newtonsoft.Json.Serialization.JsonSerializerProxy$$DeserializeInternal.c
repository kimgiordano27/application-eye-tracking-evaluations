/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$DeserializeInternal
ENTRY_POINT: 0590873c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerProxy__DeserializeInternal
               (undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  
  if ((bRam000000000754c85e & 1) == 0) {
    FUN_03188a78(PTR_DAT_070fc548);
    FUN_03188a78(PTR_DAT_070fbe70);
    FUN_03188a78(PTR_DAT_070fc128);
    bRam000000000754c85e = 1;
  }
  FUN_0597a8f4(*param_4,0);
  if (*(int *)(param_4 + 1) < 0) {
    FUN_05950030(0);
  }
  FUN_04aad4c0();
  if ((*(byte *)((long)param_4 + 0x1c) & 1) == 0) {
    if (param_3 <= *(uint *)(param_4 + 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
    *(undefined2 *)(param_2 + (long)(int)*(uint *)(param_4 + 1) * 2) = 0x2f;
  }
  puVar1 = PTR_DAT_070fbe70;
  FUN_0597a8f4(param_4[2],0);
  if (*(int *)(param_4 + 3) < 0) {
    FUN_05950030(0);
  }
  lVar2 = *(long *)puVar1;
  if (param_3 < *(int *)(param_4 + 1) + ((*(byte *)((long)param_4 + 0x1c) ^ 0xffffffff) & 1)) {
    FUN_05950030(0);
  }
  if ((*(ushort *)(*(long *)(lVar2 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_04aad4c0();
  return;
}


