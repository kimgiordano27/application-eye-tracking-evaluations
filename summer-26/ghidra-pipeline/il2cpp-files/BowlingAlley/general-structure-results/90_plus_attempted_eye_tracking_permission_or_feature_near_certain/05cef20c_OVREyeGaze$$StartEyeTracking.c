/*
FUNCTION_NAME: OVREyeGaze$$StartEyeTracking
ENTRY_POINT: 05cef20c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_4;validity_or_gating_hits_2;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVREyeGaze__StartEyeTracking(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x20;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0xcc0));
  *(undefined1 *)(unaff_x19 + 0x188) = 1;
  puVar1 = PTR_DAT_072794f0;
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x20;
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar3 = FUN_06bece64(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    lVar2 = FUN_06be9ecc(*(undefined8 *)PTR_DAT_0728dcc0,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar1);
    }
    uVar3 = FUN_06be9890(lVar2,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar2 == 0) goto LAB_05cef3f8;
      uVar4 = FUN_039efd20(lVar2,*(undefined8 *)PTR_DAT_072af388);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(*(long *)puVar1);
      }
      uVar3 = FUN_06be9890(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        lVar2 = *unaff_x20;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar2 = *unaff_x20;
        }
        **(undefined8 **)(lVar2 + 0xb8) = uVar4;
        thunk_FUN_0333a630(*(undefined8 *)(*unaff_x20 + 0xb8),uVar4);
      }
    }
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x20;
  }
  uVar4 = **(undefined8 **)(lVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(*(long *)puVar1);
  }
  uVar3 = FUN_06bece64(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
    lVar2 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727b958);
    FUN_06be9c64(lVar2,*(undefined8 *)PTR_DAT_0728dcc0,0);
    if (lVar2 == 0) {
LAB_05cef3f8:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    uVar4 = FUN_039efc38(lVar2,*(undefined8 *)PTR_DAT_072af380);
    lVar2 = *unaff_x20;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar2);
      lVar2 = *unaff_x20;
    }
    **(undefined8 **)(lVar2 + 0xb8) = uVar4;
    thunk_FUN_0333a630(*(undefined8 *)(*unaff_x20 + 0xb8),uVar4);
  }
  lVar2 = *unaff_x20;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x20;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}


