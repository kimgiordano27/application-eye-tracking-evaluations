/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 0694aa18
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint in_w10;
  uint uVar3;
  uint uVar4;
  int in_w11;
  int iVar5;
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 != 0) {
    if (in_w10 < *(uint *)(param_1 + 0x18)) {
      uVar3 = in_w10 + 1;
      iVar5 = in_w11 + 1;
      *(undefined4 *)(param_1 + (long)(int)in_w10 * 4 + 0x20) = 0x3fb83127;
      *(uint *)(unaff_x20 + 0x18) = uVar3;
      *(int *)(unaff_x20 + 0x1c) = iVar5;
    }
    else {
      FUN_04e8743c(DAT_015c5d34);
      uVar3 = *(uint *)(unaff_x20 + 0x18);
      param_1 = *(long *)(unaff_x20 + 0x10);
      iVar5 = *(int *)(unaff_x20 + 0x1c) + 1;
      *(int *)(unaff_x20 + 0x1c) = iVar5;
      if (param_1 == 0) goto LAB_0694abc8;
    }
    if (uVar3 < *(uint *)(param_1 + 0x18)) {
      uVar4 = uVar3 + 1;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar3 * 4 + 0x20) = 0x3f8ac083;
      *(uint *)(unaff_x20 + 0x18) = uVar4;
      *(int *)(unaff_x20 + 0x1c) = iVar5;
    }
    else {
      FUN_04e8743c(DAT_015c5ab8);
      uVar4 = *(uint *)(unaff_x20 + 0x18);
      param_1 = *(long *)(unaff_x20 + 0x10);
      iVar5 = *(int *)(unaff_x20 + 0x1c) + 1;
      *(int *)(unaff_x20 + 0x1c) = iVar5;
      if (param_1 == 0) goto LAB_0694abc8;
    }
    if (uVar4 < *(uint *)(param_1 + 0x18)) {
      uVar3 = uVar4 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar4 * 4 + 0x20) = 0x3f5126e9;
      *(uint *)(unaff_x20 + 0x18) = uVar3;
      *(int *)(unaff_x20 + 0x1c) = iVar5 + 1;
    }
    else {
      FUN_04e8743c(DAT_015c5890);
      uVar3 = *(uint *)(unaff_x20 + 0x18);
      param_1 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_0694abc8;
    }
    puVar1 = PTR_DAT_08487940;
    if (uVar3 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar3 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar3 * 4 + 0x20) = 0x3f26a7f0;
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


