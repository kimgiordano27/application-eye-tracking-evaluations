/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 02c95818
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  long lVar1;
  long unaff_x19;
  
                    /* try { // try from 02c95820 to 02d95883 has its CatchHandler @ 02c959a0 */
  FUN_024c9098();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_01ae9e74();
  }
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_02c96154();
  return;
}


