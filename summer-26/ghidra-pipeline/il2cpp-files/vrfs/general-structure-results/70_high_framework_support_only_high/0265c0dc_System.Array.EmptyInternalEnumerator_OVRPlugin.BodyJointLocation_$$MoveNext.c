/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BodyJointLocation>$$MoveNext
ENTRY_POINT: 0265c0dc
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_BodyJointLocation>__MoveNext(void)

{
  long lVar1;
  int in_w8;
  int unaff_w20;
  
  if (unaff_w20 == in_w8) {
    lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e171f8);
    if (lVar1 == 0) {
LAB_0265c56c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_02660dcc();
  }
  else if (unaff_w20 == 0x6a94ad8e) {
    lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e3a740);
    if (lVar1 == 0) goto LAB_0265c56c;
    FUN_02658acc();
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


