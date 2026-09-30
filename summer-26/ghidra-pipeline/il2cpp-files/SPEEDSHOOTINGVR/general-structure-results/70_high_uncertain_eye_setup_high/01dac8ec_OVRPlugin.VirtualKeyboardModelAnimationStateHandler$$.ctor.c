/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateHandler$$.ctor
ENTRY_POINT: 01dac8ec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateHandler___ctor(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint *unaff_x19;
  int unaff_w21;
  uint uVar8;
  uint unaff_w23;
  int iVar9;
  long *unaff_x24;
  int unaff_w25;
  uint uVar10;
  
  thunk_FUN_00ffe618();
  if ((unaff_w23 & 1) == 0) {
    FUN_01dac7a8();
    thunk_FUN_00ffe618();
    uVar3 = FUN_00ff7794();
    if (uVar3 == unaff_w23) {
      return;
    }
    FUN_01dacd8c();
LAB_01dac980:
    uVar3 = 0x7fffffff;
  }
  else {
    lVar7 = *unaff_x24;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar7 = *unaff_x24;
    }
    if ((unaff_w23 & 0x7ffffffe) == **(uint **)(lVar7 + 0xb8)) goto LAB_01dac980;
    thunk_FUN_00ffe618();
    uVar3 = FUN_00ff7620();
    uVar3 = uVar3 >> 1 & 0x3fffffff;
  }
  if (unaff_w21 != 0) {
    if (unaff_w21 != -1) {
      iVar4 = thunk_FUN_01027034(0);
      if ((iVar4 - unaff_w25 < 0) || (unaff_w21 <= iVar4 - unaff_w25)) goto LAB_01dacba4;
    }
    if (*(int *)(*(long *)PTR_DAT_0234cc30 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    iVar4 = FUN_01da84c8();
    if (((int)uVar3 < iVar4) && (uVar10 = uVar3 * 100, 0 < (int)uVar10)) {
      uVar2 = uVar10 | 1;
      iVar6 = 1;
      if ((int)uVar2 < 3) {
        uVar2 = 2;
      }
      uVar8 = 1;
      do {
        uVar10 = uVar10 + 100;
        if (0 < (int)((uVar8 + uVar3) * iVar6 * 100)) {
          iVar9 = iVar6 * uVar10 + 1;
          do {
            FUN_00fc7c18();
            iVar9 = iVar9 + -1;
          } while (1 < iVar9);
        }
        uVar1 = *unaff_x19;
        if (iVar6 < iVar4) {
          iVar6 = iVar6 + 1;
        }
        thunk_FUN_00ffe618();
        if ((uVar1 & 1) == 0) {
          FUN_01dac7a8();
          thunk_FUN_00ffe618();
          uVar5 = FUN_00ff7794();
          if (uVar5 == uVar1) {
            return;
          }
          FUN_01dacd8c();
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar2);
    }
    if (unaff_w21 != -1) {
      iVar4 = thunk_FUN_01027034(0);
      if ((iVar4 - unaff_w25 < 0) || (unaff_w21 - (iVar4 - unaff_w25) < 1)) {
LAB_01dacbac:
        lVar7 = *(long *)PTR_DAT_0235a210;
        goto FUN_01dacbb8;
      }
    }
    iVar4 = 0;
    do {
      uVar3 = *unaff_x19;
      thunk_FUN_00ffe618();
      if ((uVar3 & 1) == 0) {
        FUN_01dac7a8();
        thunk_FUN_00ffe618();
        uVar10 = FUN_00ff7794();
        if (uVar10 == uVar3) {
          return;
        }
        FUN_01dacd8c();
      }
      uVar3 = iVar4 * -0x33333333 + 0x19999998;
      if ((uVar3 >> 3 | iVar4 * -0x60000000) < 0x6666667) {
        FUN_0102ae38(1);
        iVar6 = iVar4 % 10;
LAB_01dacb70:
        if ((unaff_w21 != -1) && (iVar6 == 0)) {
          iVar6 = thunk_FUN_01027034(0);
          if ((iVar6 - unaff_w25 < 0) || (unaff_w21 - (iVar6 - unaff_w25) < 1)) goto LAB_01dacbac;
        }
      }
      else {
        if ((uVar3 >> 1 | iVar4 * -0x80000000) < 0x19999999) {
          FUN_0102ae38(0);
          iVar6 = 0;
          goto LAB_01dacb70;
        }
        thunk_FUN_0105efb8();
      }
      iVar4 = iVar4 + 1;
    } while( true );
  }
LAB_01dacba4:
  lVar7 = *unaff_x24;
FUN_01dacbb8:
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01dacf60();
  return;
}


