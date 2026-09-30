/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 036d64b8
PROGRAM: vrfs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long unaff_x20;
  undefined8 unaff_x22;
  
  iVar1 = FUN_036f2cf8(param_1,0);
  iVar2 = FUN_036f2cf8();
  if (iVar1 == iVar2) {
    *(undefined8 *)(unaff_x20 + 0x60) = unaff_x22;
    thunk_FUN_01656ef8((undefined8 *)(unaff_x20 + 0x60));
    *(undefined4 *)(unaff_x20 + 0x5c) = 2;
    return;
  }
  FUN_01fbafc0();
  return;
}


