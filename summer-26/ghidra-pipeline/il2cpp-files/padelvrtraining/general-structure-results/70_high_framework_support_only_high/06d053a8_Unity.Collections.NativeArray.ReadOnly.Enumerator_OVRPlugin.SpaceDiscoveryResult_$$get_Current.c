/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 06d053a8
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current
               (ulong param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  
  if ((param_1 & 1) == 0) {
    param_2 = FUN_03d8f26c();
  }
  lVar1 = *(long *)(*(long *)(param_2 + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  **(undefined8 **)(lVar1 + 0xb8) = unaff_x20;
  lVar1 = *(long *)(unaff_x19 + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x20);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03d8f26c();
  }
  thunk_FUN_03d1023c(*(undefined8 *)(lVar1 + 0xb8));
  return;
}


