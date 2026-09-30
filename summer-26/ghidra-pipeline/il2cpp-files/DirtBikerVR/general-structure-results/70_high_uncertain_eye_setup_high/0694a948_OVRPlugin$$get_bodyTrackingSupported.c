/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingSupported
ENTRY_POINT: 0694a948
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_bodyTrackingSupported(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint in_w10;
  uint uVar4;
  uint uVar5;
  int in_w11;
  int iVar6;
  long unaff_x19;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  *(int *)(unaff_x20 + 0x1c) = in_w11 + 1;
  if (lVar3 != 0) {
    if (in_w10 < *(uint *)(lVar3 + 0x18)) {
      uVar4 = in_w10 + 1;
      iVar6 = in_w11 + 2;
      *(undefined4 *)(lVar3 + (long)(int)in_w10 * 4 + 0x20) = 0x40518937;
      *(uint *)(unaff_x20 + 0x18) = uVar4;
      *(int *)(unaff_x20 + 0x1c) = iVar6;
    }
    else {
      FUN_04e8743c(DAT_015c57ac);
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      iVar6 = *(int *)(unaff_x20 + 0x1c) + 1;
      *(int *)(unaff_x20 + 0x1c) = iVar6;
      if (lVar3 == 0) goto LAB_0694abc8;
    }
    if (uVar4 < *(uint *)(lVar3 + 0x18)) {
      uVar5 = uVar4 + 1;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(lVar3 + (long)(int)uVar4 * 4 + 0x20) = 0x4005f3b6;
      *(uint *)(unaff_x20 + 0x18) = uVar5;
      *(int *)(unaff_x20 + 0x1c) = iVar6;
    }
    else {
      FUN_04e8743c(DAT_015c5658);
      uVar5 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      iVar6 = *(int *)(unaff_x20 + 0x1c) + 1;
      *(int *)(unaff_x20 + 0x1c) = iVar6;
      if (lVar3 == 0) goto LAB_0694abc8;
    }
    if (uVar5 < *(uint *)(lVar3 + 0x18)) {
      uVar4 = uVar5 + 1;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(lVar3 + (long)(int)uVar5 * 4 + 0x20) = 0x3fb83127;
      *(uint *)(unaff_x20 + 0x18) = uVar4;
      *(int *)(unaff_x20 + 0x1c) = iVar6;
    }
    else {
      FUN_04e8743c(DAT_015c5d34);
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      iVar6 = *(int *)(unaff_x20 + 0x1c) + 1;
      *(int *)(unaff_x20 + 0x1c) = iVar6;
      if (lVar3 == 0) goto LAB_0694abc8;
    }
    if (uVar4 < *(uint *)(lVar3 + 0x18)) {
      uVar5 = uVar4 + 1;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(lVar3 + (long)(int)uVar4 * 4 + 0x20) = 0x3f8ac083;
      *(uint *)(unaff_x20 + 0x18) = uVar5;
      *(int *)(unaff_x20 + 0x1c) = iVar6;
    }
    else {
      FUN_04e8743c(DAT_015c5ab8);
      uVar5 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      iVar6 = *(int *)(unaff_x20 + 0x1c) + 1;
      *(int *)(unaff_x20 + 0x1c) = iVar6;
      if (lVar3 == 0) goto LAB_0694abc8;
    }
    if (uVar5 < *(uint *)(lVar3 + 0x18)) {
      uVar4 = uVar5 + 1;
      *(undefined4 *)(lVar3 + (long)(int)uVar5 * 4 + 0x20) = 0x3f5126e9;
      *(uint *)(unaff_x20 + 0x18) = uVar4;
      *(int *)(unaff_x20 + 0x1c) = iVar6 + 1;
    }
    else {
      FUN_04e8743c(DAT_015c5890);
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      lVar3 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar3 == 0) goto LAB_0694abc8;
    }
    puVar1 = PTR_DAT_08487940;
    if (uVar4 < *(uint *)(lVar3 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar4 + 1;
      *(undefined4 *)(lVar3 + (long)(int)uVar4 * 4 + 0x20) = 0x3f26a7f0;
    }
    else {
      FUN_04e8743c(DAT_015c576c);
    }
    *(long *)(unaff_x19 + 0x88) = unaff_x20;
    thunk_FUN_03afed3c((long *)(unaff_x19 + 0x88));
    uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
    FUN_07cb2750(uVar2,0);
    *(undefined8 *)(unaff_x19 + 0x110) = uVar2;
    thunk_FUN_03afed3c(unaff_x19 + 0x110,uVar2);
    return;
  }
LAB_0694abc8:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


