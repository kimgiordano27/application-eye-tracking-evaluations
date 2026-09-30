/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteStartArray
ENTRY_POINT: 055d0e84
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2;frame_or_lifecycle_behavior
*/


undefined8 Newtonsoft_Json_JsonWriter__WriteStartArray(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
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
  FUN_02f080c8();
}


