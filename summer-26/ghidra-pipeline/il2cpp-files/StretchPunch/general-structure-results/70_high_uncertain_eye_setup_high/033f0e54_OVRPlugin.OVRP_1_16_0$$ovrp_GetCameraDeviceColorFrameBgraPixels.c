/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_GetCameraDeviceColorFrameBgraPixels
ENTRY_POINT: 033f0e54
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_GetCameraDeviceColorFrameBgraPixels(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  
  FUN_01d7d918();
  *(undefined1 *)(unaff_x23 + 0xb6f) = 1;
  iVar6 = *(int *)(*unaff_x22 + 0xe0);
  if (iVar6 == 0) {
    thunk_FUN_01dc4f30();
    iVar6 = *(int *)(*unaff_x22 + 0xe0);
  }
  uVar9 = (unaff_x21 & 0xffffffff) * (unaff_x20 & 0xffffffff);
  uVar8 = (unaff_x21 >> 0x20) * (unaff_x20 & 0xffffffff);
  uVar1 = uVar8 << 0x20;
  uVar3 = uVar9 + uVar1;
  if (iVar6 == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar7 = (unaff_x21 & 0xffffffff) * (unaff_x20 >> 0x20);
  uVar2 = uVar7 << 0x20;
  uVar1 = (unaff_x21 >> 0x20) * (unaff_x20 >> 0x20) + (uVar8 >> 0x20) + (uVar7 >> 0x20) +
          (ulong)CARRY8(uVar9,uVar1);
  if (CARRY8(uVar3,uVar2)) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 >> 0x20 == 0) {
    if (*(int *)(*unaff_x22 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    *(ulong *)(unaff_x19 + 8) = uVar3 + uVar2;
    *(int *)(unaff_x19 + 4) = (int)uVar1;
    return;
  }
  thunk_FUN_01dd295c(StringLiteral_1150);
  uVar4 = thunk_FUN_01de27b8();
  uVar5 = thunk_FUN_01dd295c(StringLiteral_8348);
  FUN_03390704(uVar4,uVar5,0);
  uVar5 = thunk_FUN_01dd295c(StringLiteral_9350);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar4,uVar5);
}


