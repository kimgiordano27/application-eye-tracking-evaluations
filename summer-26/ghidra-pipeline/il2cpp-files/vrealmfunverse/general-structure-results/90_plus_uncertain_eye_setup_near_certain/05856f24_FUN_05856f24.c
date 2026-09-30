/*
FUNCTION_NAME: FUN_05856f24
ENTRY_POINT: 05856f24
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 126
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_05856f24(long param_1)

{
  if ((DAT_066d2e8d & 1) == 0) {
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
    FUN_02b3c81c(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__);
    DAT_066d2e8d = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_0585cb24();
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_0443d6c8(*(long *)(param_1 + 0x30),
                   *(undefined8 *)
                    Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_GetEnumerator__
                  );
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_0444eb38(*(long *)(param_1 + 0x38),
                     *(undefined8 *)
                      Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


