/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarFaceTrackingBehaviorOvrPlugin$$InitializeFacePoseProvider
ENTRY_POINT: 05b63d78
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrAvatarFaceTrackingBehaviorOvrPlugin__InitializeFacePoseProvider
               (ulong param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  long *plVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long in_stack_00000008;
  
  plVar5 = *(long **)(unaff_x22 + 0xc40);
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_07280c38);
    thunk_FUN_032e1da0(PTR_DAT_07280c40);
    thunk_FUN_032e1da0(PTR_DAT_072a5798);
    thunk_FUN_032e1da0(PTR_DAT_07282ad8);
    thunk_FUN_032e1da0(PTR_DAT_07282ac8);
    thunk_FUN_032e1da0(PTR_DAT_072a57a0);
    *(undefined1 *)(unaff_x20 + 0x7c5) = 1;
  }
  *(undefined4 *)(param_2 + 0x100) = 0xffffffff;
  puVar1 = PTR_DAT_07280c38;
  lVar3 = *plVar5;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *plVar5;
  }
  lVar4 = *(long *)puVar1;
  iVar2 = **(int **)(lVar3 + 0xb8);
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar4);
  }
  lVar3 = *(long *)(param_2 + 0xf0);
  if (*(long *)(param_2 + 0xf0) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar3 = *(long *)(param_2 + 0xf8);
    if (lVar3 == 0) {
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb2a00(*(undefined8 *)PTR_DAT_072a57a0,0);
      return;
    }
    lVar4 = *(long *)(*(long *)PTR_DAT_07282ac8 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_032934b8();
    }
    iVar2 = FUN_045e351c(param_2 + 0x50,lVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
    if (*(int *)(*plVar5 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*plVar5);
    }
    FUN_0457c21c(param_2,iVar2 + -1,*(undefined8 *)PTR_DAT_07282ad8);
    *(long *)(param_2 + 0xf0) = in_stack_00000008;
    lVar3 = in_stack_00000008;
  }
  lVar4 = param_2 + 0xe0;
  FUN_05b6b498(lVar3,lVar4,param_2,0);
  if (*(int *)(*plVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076cfa1e == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07280c40);
    DAT_076cfa1e = '\x01';
  }
  lVar3 = *plVar5;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar3 = *plVar5;
  }
  if (iVar2 != **(int **)(lVar3 + 0xb8)) {
    lVar6 = *(long *)PTR_DAT_072a5798;
    lVar3 = *(long *)(lVar6 + 0x38);
    if (lVar3 == 0) {
      FUN_03293514(lVar6);
      lVar3 = *(long *)(lVar6 + 0x38);
    }
    auVar7 = FUN_04576c28(lVar4,*(undefined8 *)(lVar3 + 8));
    iVar2 = FUN_03ad4d6c(auVar7._0_8_,auVar7._8_8_,iVar2,
                         *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x28));
    *(int *)(param_2 + 0x100) = iVar2;
    if (-1 < iVar2) {
      FUN_04576520(lVar4,*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x30));
    }
  }
  return;
}


