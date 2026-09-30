/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$System.Collections.IEnumerator.Reset
ENTRY_POINT: 0265c360
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


long System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__System_Collections_IEnumerator_Reset
               (void)

{
  bool in_ZR;
  long lVar1;
  int unaff_w20;
  
  if (in_ZR) {
    lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e13208);
    if (lVar1 == 0) {
LAB_0265c56c:
                    /* WARNING: Subroutine does not return */
      FUN_0160eeb4();
    }
    FUN_0265b9a4();
  }
  else if (unaff_w20 == 0x267db4f4) {
    lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e3a740);
    if (lVar1 == 0) goto LAB_0265c56c;
    FUN_02658acc();
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}


