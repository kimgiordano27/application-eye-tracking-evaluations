/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$Dispose
ENTRY_POINT: 0241d5e8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__Dispose
               (undefined8 param_1,long param_2)

{
  long lVar1;
  long in_x9;
  long in_x10;
  long unaff_x19;
  
  do {
    if (*(long *)(in_x10 + -8) == param_2) goto FUN_0241d61c;
    in_x9 = in_x9 + -1;
    in_x10 = in_x10 + 0x10;
  } while (in_x9 != 0);
  FUN_01dde8fc();
FUN_0241d61c:
  FUN_02990b84();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01dde7f8();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_0241df28();
  return;
}


