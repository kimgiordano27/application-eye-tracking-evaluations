/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 049ac8e4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose
               (long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    if ((*(ushort *)(*(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 200) + 0x135) & 1) == 0
       ) {
      FUN_02f41e9c();
    }
    lVar1 = thunk_FUN_02f45270();
    System_Collections_Generic_List<char>__System_Collections_IList_Add
              (lVar1,param_1,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 0xc0) + 0xd0));
    *(long *)(param_1 + 0x38) = lVar1;
  }
  return lVar1;
}


