/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.AppPerfFrameStats>$$Dispose
ENTRY_POINT: 0265bf08
PROGRAM: vrfs-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_14;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array_EmptyInternalEnumerator<OVRPlugin_AppPerfFrameStats>__Dispose(void)

{
  long lVar1;
  uint in_w8;
  uint unaff_w20;
  
  if ((in_w8 & 0xffff | 0x67e10000) < unaff_w20) {
    if (0x6a94ad8e < unaff_w20) {
      if (unaff_w20 == 0x6b36a54f) {
        lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e13208);
        if (lVar1 != 0) {
          FUN_0265b9a4();
          return lVar1;
        }
      }
      else {
        if (unaff_w20 != 0x6c6e33e3) {
          return 0;
        }
        lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e59de8);
        if (lVar1 != 0) {
          FUN_0265c934();
          return lVar1;
        }
      }
      goto LAB_0265c56c;
    }
    if (unaff_w20 == 0x68027c73) {
      lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e171f8);
      if (lVar1 != 0) {
        FUN_02660dcc();
        return lVar1;
      }
      goto LAB_0265c56c;
    }
    if (unaff_w20 != 0x6a94ad8e) {
      return 0;
    }
  }
  else {
    if (unaff_w20 == 0x646d855f) {
      lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06e579c8);
      if (lVar1 != 0) {
        FUN_0265b52c();
        return lVar1;
      }
      goto LAB_0265c56c;
    }
    if (unaff_w20 != 0x6570b2bd) {
      if (unaff_w20 != 0x67e19d37) {
        return 0;
      }
      lVar1 = thunk_FUN_015d056c(*(undefined8 *)PTR_DAT_06dfab10);
      if (lVar1 != 0) {
        FUN_0266088c();
        return lVar1;
      }
      goto LAB_0265c56c;
    }
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


