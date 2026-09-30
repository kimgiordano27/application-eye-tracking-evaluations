/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUK.<TrackerCoroutine>d__105$$System.IDisposable.Dispose
ENTRY_POINT: 05af8cf4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUK_<TrackerCoroutine>d__105__System_IDisposable_Dispose(void)

{
  undefined4 uVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  long unaff_x21;
  
  thunk_FUN_0329bf60();
  if (unaff_x21 != 0) {
    uVar1 = *(undefined4 *)(unaff_x21 + 0x2c);
    *(undefined4 *)(unaff_x20 + 0xb0) = unaff_w19;
    *(undefined4 *)(unaff_x20 + 8) = uVar1;
    *(undefined4 *)(unaff_x20 + 0xc) = 0;
    memset((void *)(unaff_x20 + 0x10),0,0xa0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


