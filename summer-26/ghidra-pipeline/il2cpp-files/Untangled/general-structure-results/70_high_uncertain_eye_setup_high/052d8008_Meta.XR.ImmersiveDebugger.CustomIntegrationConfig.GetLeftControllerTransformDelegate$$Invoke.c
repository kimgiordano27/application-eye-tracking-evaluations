/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetLeftControllerTransformDelegate$$Invoke
ENTRY_POINT: 052d8008
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetLeftControllerTransformDelegate__Invoke
               (void)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x20;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x24;
  
  if ((unaff_w21 == 0 && unaff_w22 == 0) && *(char *)(unaff_x20 + 600) == '\0') {
    FUN_052d96d0();
  }
  else {
    FUN_052d5ec4();
    FUN_066cad54();
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x280);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar1 = FUN_066cd30c(uVar3,0);
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar1 = FUN_066cd30c(uVar3,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = *(long *)(unaff_x19 + 0x280);
      if ((lVar2 == 0) || (*(long *)(unaff_x19 + 0x140) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_052ef850(*(undefined4 *)(lVar2 + 0x48),*(undefined4 *)(lVar2 + 0x4c),
                   *(undefined4 *)(lVar2 + 0x50),*(undefined4 *)(lVar2 + 0x3c),
                   *(undefined4 *)(lVar2 + 0x40),*(undefined4 *)(lVar2 + 0x44),
                   *(long *)(unaff_x19 + 0x140),0);
    }
  }
  return;
}


