/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_IsCreated
ENTRY_POINT: 02bf0164
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_IsCreated(void)

{
  long lVar1;
  long *unaff_x21;
  
  lVar1 = FUN_01ae9e74();
  if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  if (*(long *)(*unaff_x21 + 0x40) == *(long *)(lVar1 + 0x40)) {
    thunk_FUN_01afac30();
    FUN_02bf00a8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b4841c();
}


