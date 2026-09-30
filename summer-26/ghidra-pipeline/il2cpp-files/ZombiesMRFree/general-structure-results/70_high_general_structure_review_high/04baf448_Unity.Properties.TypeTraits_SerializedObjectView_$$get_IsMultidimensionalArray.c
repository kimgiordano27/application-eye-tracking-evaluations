/*
FUNCTION_NAME: Unity.Properties.TypeTraits<SerializedObjectView>$$get_IsMultidimensionalArray
ENTRY_POINT: 04baf448
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2
*/


void Unity_Properties_TypeTraits<SerializedObjectView>__get_IsMultidimensionalArray(long param_1)

{
  int unaff_w19;
  undefined8 unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x48);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_02fdcff0(*unaff_x22);
  }
  uVar1 = FUN_05afde1c(uVar1,0);
  FUN_05b10894(uVar1,0);
  if (unaff_w19 < 0) {
    FUN_05b0fafc(0);
  }
  *unaff_x21 = unaff_x20;
  *(int *)(unaff_x21 + 1) = unaff_w19;
  return;
}


