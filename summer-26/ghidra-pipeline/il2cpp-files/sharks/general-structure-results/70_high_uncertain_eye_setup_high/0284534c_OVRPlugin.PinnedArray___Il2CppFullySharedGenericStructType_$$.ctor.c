/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$.ctor
ENTRY_POINT: 0284534c
PROGRAM: sharks-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>___ctor(long param_1)

{
  ushort uVar1;
  ushort *in_x9;
  int unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  int unaff_w23;
  long unaff_x24;
  
  uVar1 = *in_x9;
  if ((uVar1 & 1) == 0) {
    FUN_0185daa4(param_1);
    param_1 = *(long *)(unaff_x24 + 0x20);
    uVar1 = *(ushort *)(param_1 + 0x135);
  }
  if ((uVar1 & 1) == 0) {
    FUN_0185daa4(param_1);
  }
  FUN_033b7a9c(unaff_x20 + unaff_w23 * 0x28,unaff_x22 + unaff_w21 * 0x28,(long)(unaff_w19 * 0x28),0)
  ;
  return;
}


