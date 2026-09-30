/*
FUNCTION_NAME: Newtonsoft.Json.JsonWriter$$WriteEndArray
ENTRY_POINT: 055d0e90
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;data_collection
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;strong_file_logging_hits_2
*/


undefined8 Newtonsoft_Json_JsonWriter__WriteEndArray(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int in_w9;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar3 = 0;
  if (uVar1 != 0) {
    iVar3 = (in_w9 + param_3) / (int)uVar1;
  }
  uVar2 = (in_w9 + param_3) - iVar3 * uVar1;
  if (uVar2 < uVar1) {
    return *(undefined8 *)(param_1 + (long)(int)uVar2 * 8 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c8();
}


