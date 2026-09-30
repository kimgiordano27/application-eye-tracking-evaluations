/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 03c6a144
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length
               (ulong param_1,undefined8 param_2,long param_3)

{
  long *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    param_3 = FUN_02d9a2e0(param_3);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) == *(long *)(param_3 + 0x40)) {
      thunk_FUN_02d9d688();
      FUN_03c6a04c();
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d60e88();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


