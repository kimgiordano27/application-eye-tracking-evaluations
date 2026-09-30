/*
FUNCTION_NAME: OVRPlugin$$get_bodyTrackingEnabled
ENTRY_POINT: 05d868b0
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_10;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__get_bodyTrackingEnabled(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x19;
  uint *unaff_x20;
  undefined8 *unaff_x22;
  long *unaff_x23;
  int *unaff_x24;
  
  FUN_04190440(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
  lVar5 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar5 != 0) {
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 2;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04190440();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_05d86aa0;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 3;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04190440();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_05d86aa0;
    }
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 4;
      *unaff_x24 = *unaff_x24 + 1;
    }
    else {
      FUN_04190440();
      lVar5 = *(long *)(unaff_x19 + 0x10);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_05d86aa0;
    }
    puVar2 = PTR_DAT_072b17b8;
    uVar1 = *unaff_x20;
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *unaff_x20 = uVar1 + 1;
      *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = 5;
    }
    else {
      FUN_04190440();
    }
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 0x20) = unaff_x19;
    thunk_FUN_0333a630();
    uVar3 = FUN_032d5d3c(*unaff_x22,5);
    FUN_058505e4(uVar3,*(undefined8 *)puVar2,0);
    puVar4 = (undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 0x28);
    *puVar4 = uVar3;
    thunk_FUN_0333a630(puVar4,uVar3);
    return;
  }
LAB_05d86aa0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


