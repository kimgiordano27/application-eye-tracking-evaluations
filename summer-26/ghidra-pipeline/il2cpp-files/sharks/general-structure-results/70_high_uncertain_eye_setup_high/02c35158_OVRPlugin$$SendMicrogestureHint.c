/*
FUNCTION_NAME: OVRPlugin$$SendMicrogestureHint
ENTRY_POINT: 02c35158
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__SendMicrogestureHint(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  int unaff_w19;
  int unaff_w20;
  long unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  
  do {
    uVar2 = FUN_02c38c7c(param_1,unaff_w22,0);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    iVar1 = *(int *)(unaff_x21 + 0x10);
    thunk_FUN_0181f594();
    if (iVar1 != 0) {
      return 1;
    }
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_01843fdc();
    }
    FUN_02c30da8(&stack0x00000008);
    if (unaff_w20 != -1) {
      iVar1 = thunk_FUN_018486b4(0);
      if (iVar1 - unaff_w19 < 0) {
        return 0;
      }
      unaff_w22 = unaff_w20 - (iVar1 - unaff_w19);
      if (unaff_w22 < 1) {
        return 0;
      }
    }
    param_1 = *(undefined8 *)(unaff_x21 + 0x20);
  } while( true );
}


