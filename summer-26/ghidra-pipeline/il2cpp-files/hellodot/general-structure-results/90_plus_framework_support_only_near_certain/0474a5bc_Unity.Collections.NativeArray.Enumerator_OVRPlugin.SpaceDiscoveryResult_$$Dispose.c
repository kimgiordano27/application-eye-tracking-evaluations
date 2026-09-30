/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$Dispose
ENTRY_POINT: 0474a5bc
PROGRAM: hellodot-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__Dispose(void)

{
  long lVar1;
  long *unaff_x21;
  long unaff_x22;
  
  AkMIDIEventCallbackInfo__get_byProgramNum();
  *(undefined1 *)(unaff_x22 + 0x87c) = 1;
  FUN_04f7383c();
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
  }
  lVar1 = FUN_04efe4a4(0);
  if (lVar1 != 0) {
    FUN_044a64d0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


