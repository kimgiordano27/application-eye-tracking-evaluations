/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$SetClientVersion
ENTRY_POINT: 02c481f8
PROGRAM: sharks-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__SetClientVersion(void)

{
  ulong uVar1;
  int in_w8;
  long *unaff_x20;
  long unaff_x21;
  long *unaff_x24;
  undefined8 in_stack_00000008;
  
  if (in_w8 == 0) {
    thunk_FUN_01843fdc();
  }
  uVar1 = FUN_02c30424(&stack0x00000008,0);
  if ((uVar1 & 1) == 0) {
    if (unaff_x21 == 0) goto LAB_02c482c8;
  }
  else {
    uVar1 = FUN_02c40bec();
    if ((uVar1 & 1) == 0) {
      if (*(int *)(*unaff_x24 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      FUN_02c303dc(&stack0x00000008,0);
    }
    if (unaff_x21 == 0) goto LAB_02c482c8;
    FUN_02c42ca8();
  }
  uVar1 = FUN_02c40bec();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_02c46aec(), (uVar1 & 1) == 0)) {
    if (unaff_x20 == (long *)0x0) {
LAB_02c482c8:
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    (**(code **)(*unaff_x20 + 0x178))();
  }
  return;
}


