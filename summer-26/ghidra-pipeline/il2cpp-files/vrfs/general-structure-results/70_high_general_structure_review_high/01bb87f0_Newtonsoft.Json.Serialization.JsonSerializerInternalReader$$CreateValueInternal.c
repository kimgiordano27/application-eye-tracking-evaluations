/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateValueInternal
ENTRY_POINT: 01bb87f0
PROGRAM: vrfs-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
               (long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int in_w8;
  uint in_w9;
  uint in_w10;
  long lVar2;
  
  *(uint *)(param_1 + 0x20) = in_w10 | in_w9;
  *(int *)(param_1 + 0x24) = in_w8 + param_3;
  if (in_w8 + param_3 < 0x10) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
  lVar2 = *(long *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x1c) = uVar1 + 1;
  if (lVar2 == 0) {
LAB_01bb8878:
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (uVar1 < *(uint *)(lVar2 + 0x18)) {
    *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)(in_w10 | in_w9);
    uVar1 = *(uint *)(param_1 + 0x1c);
    lVar2 = *(long *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x1c) = uVar1 + 1;
    if (lVar2 == 0) goto LAB_01bb8878;
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(char *)(lVar2 + (int)uVar1 + 0x20) = (char)((uint)*(undefined4 *)(param_1 + 0x20) >> 8);
      *(uint *)(param_1 + 0x20) = (uint)*(ushort *)(param_1 + 0x22);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -0x10;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0160eebc();
}


