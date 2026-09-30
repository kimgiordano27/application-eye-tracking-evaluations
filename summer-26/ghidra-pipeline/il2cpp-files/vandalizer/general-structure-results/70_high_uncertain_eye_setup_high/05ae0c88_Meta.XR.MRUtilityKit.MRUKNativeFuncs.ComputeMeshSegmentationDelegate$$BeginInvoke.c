/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.ComputeMeshSegmentationDelegate$$BeginInvoke
ENTRY_POINT: 05ae0c88
PROGRAM: vandalizer-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_ComputeMeshSegmentationDelegate__BeginInvoke(long param_1)

{
  uint in_w9;
  uint in_w10;
  uint uVar1;
  int in_w11;
  long lVar2;
  long unaff_x19;
  
  while( true ) {
    lVar2 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = in_w10 + 1;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(lVar2 + 0x18) <= in_w10) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar1 = in_w10 + 1;
    if (-1 < *(int *)(lVar2 + (long)(int)in_w10 * (long)in_w11 + 0x20)) break;
    in_w10 = uVar1;
    if (in_w9 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
LAB_05ae0cdc:
      return uVar1 < in_w9;
    }
  }
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(lVar2 + (long)(int)in_w10 * 0x14 + 0x2c);
  uVar1 = in_w10;
  goto LAB_05ae0cdc;
}


