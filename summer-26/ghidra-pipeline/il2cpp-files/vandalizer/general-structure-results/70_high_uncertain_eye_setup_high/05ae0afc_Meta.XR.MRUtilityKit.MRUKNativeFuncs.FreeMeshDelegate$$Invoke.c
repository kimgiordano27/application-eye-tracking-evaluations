/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.FreeMeshDelegate$$Invoke
ENTRY_POINT: 05ae0afc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_MRUtilityKit_MRUKNativeFuncs_FreeMeshDelegate__Invoke(long param_1)

{
  uint in_w9;
  uint in_w10;
  uint uVar1;
  int in_w11;
  long in_x12;
  uint in_w13;
  uint in_w14;
  long unaff_x19;
  
  while( true ) {
    if (in_w14 <= in_w13) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar1 = in_w13 + 1;
    if (-1 < *(int *)(in_x12 + (long)(int)in_w10 * (long)in_w11 + 0x20)) break;
    if (in_w9 <= uVar1) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined4 *)(unaff_x19 + 0x10) = 0;
      goto LAB_05ae0b38;
    }
    in_x12 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = in_w13 + 2;
    if (in_x12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    in_w14 = *(uint *)(in_x12 + 0x18);
    in_w13 = in_w13 + 1;
    in_w10 = uVar1;
  }
  *(undefined4 *)(unaff_x19 + 0x10) = *(undefined4 *)(in_x12 + (long)(int)in_w10 * 0x14 + 0x28);
  uVar1 = in_w10;
LAB_05ae0b38:
  return uVar1 < in_w9;
}


