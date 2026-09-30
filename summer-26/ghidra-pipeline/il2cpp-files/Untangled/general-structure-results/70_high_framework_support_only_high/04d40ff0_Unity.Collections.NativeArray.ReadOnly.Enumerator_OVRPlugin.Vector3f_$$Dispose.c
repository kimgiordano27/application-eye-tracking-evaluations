/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 04d40ff0
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_Vector3f>__Dispose(ulong param_1)

{
  long lVar1;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_02eea768();
  }
  if ((unaff_x21 != 0) && (lVar1 = thunk_FUN_02ef170c(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02f08440();
  }
  FUN_04d3f5f0();
  return;
}


