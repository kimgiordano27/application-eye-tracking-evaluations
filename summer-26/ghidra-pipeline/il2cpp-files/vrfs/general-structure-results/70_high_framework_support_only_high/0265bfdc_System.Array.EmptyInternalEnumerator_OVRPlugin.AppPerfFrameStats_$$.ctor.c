/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$.ctor
ENTRY_POINT: 0265bfdc
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>___ctor(void)

{
  bool in_ZR;
  bool in_CY;
  long lVar1;
  int unaff_w20;
  
  if (in_CY && !in_ZR) {
    if (unaff_w20 == 0x36e84f8c) {
      lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e13208);
      if (lVar1 != 0) {
        FUN_0265b9a4();
        return lVar1;
      }
      goto LAB_0265c56c;
    }
    if (unaff_w20 != 0x3e9b1f61) {
      return 0;
    }
  }
  else if (unaff_w20 != 0x3497d7f6) {
    if (unaff_w20 != 0x35b5c4e3) {
      return 0;
    }
    lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e171f8);
    if (lVar1 != 0) {
      FUN_02660dcc();
      return lVar1;
    }
    goto LAB_0265c56c;
  }
  lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e3a740);
  if (lVar1 != 0) {
    FUN_02658acc();
    return lVar1;
  }
LAB_0265c56c:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


