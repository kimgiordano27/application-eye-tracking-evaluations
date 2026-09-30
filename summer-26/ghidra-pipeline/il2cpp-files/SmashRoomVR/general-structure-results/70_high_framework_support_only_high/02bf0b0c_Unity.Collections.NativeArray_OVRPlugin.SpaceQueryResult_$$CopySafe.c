/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopySafe
ENTRY_POINT: 02bf0b0c
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopySafe
               (undefined8 param_1,long param_2)

{
  long *unaff_x19;
  
  if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
    param_2 = FUN_01ae9e74(param_2);
  }
  if (unaff_x19 != (long *)0x0) {
    if (*(long *)(*unaff_x19 + 0x40) == *(long *)(param_2 + 0x40)) {
      thunk_FUN_01afac30();
      FUN_02bf09f4();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b4841c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


