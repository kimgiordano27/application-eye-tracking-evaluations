/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$Invoke
ENTRY_POINT: 01dac99c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler__Invoke(void)

{
  uint uVar1;
  bool in_NG;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int in_w8;
  uint *unaff_x19;
  int unaff_w21;
  uint uVar7;
  int iVar8;
  long *unaff_x24;
  int unaff_w25;
  int unaff_w27;
  uint uVar9;
  
  if ((in_NG) || (unaff_w21 <= in_w8)) {
    lVar6 = *unaff_x24;
FUN_01dacbb8:
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dacf60();
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_0234cc30 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  iVar2 = FUN_01da84c8();
  if ((unaff_w27 < iVar2) && (uVar9 = unaff_w27 * 100, 0 < (int)uVar9)) {
    uVar4 = uVar9 | 1;
    iVar5 = 1;
    if ((int)uVar4 < 3) {
      uVar4 = 2;
    }
    uVar7 = 1;
    do {
      uVar9 = uVar9 + 100;
      if (0 < (int)((uVar7 + unaff_w27) * iVar5 * 100)) {
        iVar8 = iVar5 * uVar9 + 1;
        do {
          FUN_00fc7c18();
          iVar8 = iVar8 + -1;
        } while (1 < iVar8);
      }
      uVar1 = *unaff_x19;
      if (iVar5 < iVar2) {
        iVar5 = iVar5 + 1;
      }
      thunk_FUN_00ffe618();
      if ((uVar1 & 1) == 0) {
        FUN_01dac7a8();
        thunk_FUN_00ffe618();
        uVar3 = FUN_00ff7794();
        if (uVar3 == uVar1) {
          return;
        }
        FUN_01dacd8c();
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar4);
  }
  if (unaff_w21 != -1) {
    iVar2 = thunk_FUN_01027034(0);
    if ((iVar2 - unaff_w25 < 0) || (unaff_w21 - (iVar2 - unaff_w25) < 1)) {
LAB_01dacbac:
      lVar6 = *(long *)PTR_DAT_0235a210;
      goto FUN_01dacbb8;
    }
  }
  iVar2 = 0;
  do {
    uVar9 = *unaff_x19;
    thunk_FUN_00ffe618();
    if ((uVar9 & 1) == 0) {
      FUN_01dac7a8();
      thunk_FUN_00ffe618();
      uVar4 = FUN_00ff7794();
      if (uVar4 == uVar9) {
        return;
      }
      FUN_01dacd8c();
    }
    uVar9 = iVar2 * -0x33333333 + 0x19999998;
    if ((uVar9 >> 3 | iVar2 * -0x60000000) < 0x6666667) {
      FUN_0102ae38(1);
      iVar5 = iVar2 % 10;
LAB_01dacb70:
      if ((unaff_w21 != -1) && (iVar5 == 0)) {
        iVar5 = thunk_FUN_01027034(0);
        if ((iVar5 - unaff_w25 < 0) || (unaff_w21 - (iVar5 - unaff_w25) < 1)) goto LAB_01dacbac;
      }
    }
    else {
      if ((uVar9 >> 1 | iVar2 * -0x80000000) < 0x19999999) {
        FUN_0102ae38(0);
        iVar5 = 0;
        goto LAB_01dacb70;
      }
      thunk_FUN_0105efb8();
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


