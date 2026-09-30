/*
FUNCTION_NAME: OVRPlugin.PinnedArray<__Il2CppFullySharedGenericStructType>$$Dispose
ENTRY_POINT: 043385f4
PROGRAM: Untangled-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_PinnedArray<__Il2CppFullySharedGenericStructType>__Dispose
               (ulong param_1,undefined8 param_2,undefined4 *param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d0e058);
    FUN_02f07e70(PTR_DAT_06d0e060);
    *(undefined1 *)(unaff_x22 + 0x91) = 1;
  }
  lVar1 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_02eea768();
  }
  uVar2 = FUN_04338664(param_2,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x38));
  *param_3 = (int)(uVar2 >> 0x20);
  return (uVar2 & 0xff) != 0;
}


