/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 036d64c8
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(undefined8 param_1)

{
  int iVar1;
  long unaff_x20;
  int unaff_w21;
  undefined8 unaff_x22;
  
  iVar1 = FUN_036f2cf8(param_1,0);
  if (unaff_w21 == iVar1) {
    *(undefined8 *)(unaff_x20 + 0x60) = unaff_x22;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x20 + 0x60));
    *(undefined4 *)(unaff_x20 + 0x5c) = 2;
    return;
  }
  FUN_01fbafc0();
  return;
}


