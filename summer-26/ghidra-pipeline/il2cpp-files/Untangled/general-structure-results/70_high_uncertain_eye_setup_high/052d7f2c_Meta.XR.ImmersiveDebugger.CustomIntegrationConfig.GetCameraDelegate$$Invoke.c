/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.CustomIntegrationConfig.GetCameraDelegate$$Invoke
ENTRY_POINT: 052d7f2c
PROGRAM: Untangled-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_CustomIntegrationConfig_GetCameraDelegate__Invoke(void)

{
  int iVar1;
  ulong uVar2;
  char cVar3;
  int in_w8;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  int unaff_w21;
  int unaff_w22;
  long *unaff_x24;
  
  if (in_w8 == 0) {
    if (*(int *)(unaff_x20 + 0x20) != 1) {
      if (((*(int *)(unaff_x20 + 0x20) == 2) || (*(char *)(unaff_x19 + 0xca) != '\0')) ||
         (iVar1 = FUN_0528dcb0(), 1 < iVar1)) {
        cVar3 = '\x01';
      }
      else {
        cVar3 = *(char *)(unaff_x20 + 600);
      }
      if ((unaff_w21 != 0 || unaff_w22 != 0) || cVar3 != '\0') {
        FUN_052d5ec4();
        FUN_066cad54();
        goto LAB_052d7f3c;
      }
    }
  }
  FUN_052d96d0();
LAB_052d7f3c:
  uVar5 = *(undefined8 *)(unaff_x19 + 0x280);
  if (*(int *)(*unaff_x24 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  uVar2 = FUN_066cd30c(uVar5,0);
  if ((uVar2 & 1) != 0) {
    uVar5 = *(undefined8 *)(unaff_x19 + 0x140);
    if (*(int *)(*unaff_x24 + 0xe0) == 0) {
      thunk_FUN_02f12b58();
    }
    uVar2 = FUN_066cd30c(uVar5,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = *(long *)(unaff_x19 + 0x280);
      if ((lVar4 == 0) || (*(long *)(unaff_x19 + 0x140) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      FUN_052ef850(*(undefined4 *)(lVar4 + 0x48),*(undefined4 *)(lVar4 + 0x4c),
                   *(undefined4 *)(lVar4 + 0x50),*(undefined4 *)(lVar4 + 0x3c),
                   *(undefined4 *)(lVar4 + 0x40),*(undefined4 *)(lVar4 + 0x44),
                   *(long *)(unaff_x19 + 0x140),0);
    }
  }
  return;
}


