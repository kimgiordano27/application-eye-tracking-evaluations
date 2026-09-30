/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarFaceTrackingBehaviorOvrPlugin$$get_FacePoseProvider
ENTRY_POINT: 05b63d60
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrAvatarFaceTrackingBehaviorOvrPlugin__get_FacePoseProvider(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long in_stack_00000008;
  
  puVar2 = PTR_DAT_07280c40;
  if ((DAT_076d67c5 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_07280c38);
    thunk_FUN_032e1da0(PTR_DAT_07280c40);
    thunk_FUN_032e1da0(PTR_DAT_072a5798);
    thunk_FUN_032e1da0(PTR_DAT_07282ad8);
    thunk_FUN_032e1da0(PTR_DAT_07282ac8);
    thunk_FUN_032e1da0(PTR_DAT_072a57a0);
    DAT_076d67c5 = 1;
  }
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  puVar1 = PTR_DAT_07280c38;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar4 = *(long *)puVar2;
  }
  lVar5 = *(long *)puVar1;
  iVar3 = **(int **)(lVar4 + 0xb8);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_032cd7c0(lVar5);
  }
  lVar4 = *(long *)(param_1 + 0xf0);
  if (*(long *)(param_1 + 0xf0) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    lVar4 = *(long *)(param_1 + 0xf8);
    if (lVar4 == 0) {
      if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      FUN_06bb2a00(*(undefined8 *)PTR_DAT_072a57a0,0);
      return;
    }
    lVar5 = *(long *)(*(long *)PTR_DAT_07282ac8 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_032934b8();
    }
    iVar3 = FUN_045e351c(param_1 + 0x50,lVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar2);
    }
    FUN_0457c21c(param_1,iVar3 + -1,*(undefined8 *)PTR_DAT_07282ad8);
    *(long *)(param_1 + 0xf0) = in_stack_00000008;
    lVar4 = in_stack_00000008;
  }
  lVar5 = param_1 + 0xe0;
  FUN_05b6b498(lVar4,lVar5,param_1,0);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  if (DAT_076cfa1e == '\0') {
    thunk_FUN_032e1da0(PTR_DAT_07280c40);
    DAT_076cfa1e = '\x01';
  }
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar4 = *(long *)puVar2;
  }
  if (iVar3 != **(int **)(lVar4 + 0xb8)) {
    lVar6 = *(long *)PTR_DAT_072a5798;
    lVar4 = *(long *)(lVar6 + 0x38);
    if (lVar4 == 0) {
      FUN_03293514(lVar6);
      lVar4 = *(long *)(lVar6 + 0x38);
    }
    auVar7 = FUN_04576c28(lVar5,*(undefined8 *)(lVar4 + 8));
    iVar3 = FUN_03ad4d6c(auVar7._0_8_,auVar7._8_8_,iVar3,
                         *(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x28));
    *(int *)(param_1 + 0x100) = iVar3;
    if (-1 < iVar3) {
      FUN_04576520(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0x38) + 0x30));
    }
  }
  return;
}


