/*
FUNCTION_NAME: OVRPlugin.VirtualKeyboardModelAnimationStateBufferProvider$$Invoke
ENTRY_POINT: 01dac814
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider__Invoke
               (uint *param_1,int param_2,char *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  int iStack000000000000000c;
  
  if ((DAT_0247d9a4 & 1) == 0) {
    FUN_00fdc2e4(PTR_DAT_0234cc30);
    FUN_00fdc2e4(PTR_DAT_0235a210);
    DAT_0247d9a4 = 1;
  }
  FUN_01dacd8c();
  puVar3 = PTR_DAT_0235a210;
  if (*param_3 != '\0') {
    *param_3 = '\0';
    uVar11 = thunk_FUN_010303a8(PTR_DAT_0235a218);
    uVar11 = FUN_01d75474(uVar11,0);
    thunk_FUN_010303a8(PTR_DAT_0234bcd0);
    uVar12 = thunk_FUN_010400dc();
    FUN_01c65ad0(uVar12,uVar11,0);
    uVar11 = thunk_FUN_010303a8(PTR_DAT_0235a220);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar12,uVar11);
  }
  if (param_2 < -1) {
    iStack000000000000000c = param_2;
    uVar11 = thunk_FUN_010303a8(PTR_DAT_0234bb30);
    uVar11 = thunk_FUN_0103fd0c(uVar11,&stack0x0000000c);
    uVar12 = thunk_FUN_010303a8(PTR_DAT_0235a228);
    uVar12 = FUN_01d75474(uVar12,0);
    thunk_FUN_010303a8(PTR_DAT_0234be28);
    uVar13 = thunk_FUN_010400dc();
    uVar14 = thunk_FUN_010303a8(PTR_DAT_02359f58);
    FUN_01c63a1c(uVar13,uVar14,uVar11,uVar12,0);
    uVar11 = thunk_FUN_010303a8(PTR_DAT_0235a220);
                    /* WARNING: Subroutine does not return */
    FUN_00fdc400(uVar13,uVar11);
  }
  if (param_2 + 1U < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = thunk_FUN_01027034(0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  uVar6 = *param_1;
  thunk_FUN_00ffe618();
  if (-1 < (int)uVar6) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    FUN_01dacdf8(param_1,param_2,iVar4,param_3);
    return;
  }
  uVar6 = *param_1;
  thunk_FUN_00ffe618();
  if ((uVar6 & 1) == 0) {
    FUN_01dac7a8();
    thunk_FUN_00ffe618();
    uVar5 = FUN_00ff7794(param_1,uVar6 | 1,uVar6,param_3);
    if (uVar5 == uVar6) {
      return;
    }
    FUN_01dacd8c();
LAB_01dac980:
    uVar6 = 0x7fffffff;
  }
  else {
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      lVar10 = *(long *)puVar3;
    }
    if ((uVar6 & 0x7ffffffe) == **(uint **)(lVar10 + 0xb8)) goto LAB_01dac980;
    thunk_FUN_00ffe618();
    uVar6 = FUN_00ff7620(param_1,2);
    uVar6 = uVar6 >> 1 & 0x3fffffff;
  }
  if (param_2 != 0) {
    if (param_2 != -1) {
      iVar7 = thunk_FUN_01027034(0);
      if ((iVar7 - iVar4 < 0) || (param_2 <= iVar7 - iVar4)) goto LAB_01dacba4;
    }
    if (*(int *)(*(long *)PTR_DAT_0234cc30 + 0xe0) == 0) {
      thunk_FUN_01022c14();
    }
    iVar7 = FUN_01da84c8();
    if (((int)uVar6 < iVar7) && (uVar5 = uVar6 * 100, 0 < (int)uVar5)) {
      uVar2 = uVar5 | 1;
      iVar9 = 1;
      if ((int)uVar2 < 3) {
        uVar2 = 2;
      }
      uVar15 = 1;
      do {
        uVar5 = uVar5 + 100;
        if (0 < (int)((uVar15 + uVar6) * iVar9 * 100)) {
          iVar16 = iVar9 * uVar5 + 1;
          do {
            FUN_00fc7c18();
            iVar16 = iVar16 + -1;
          } while (1 < iVar16);
        }
        uVar1 = *param_1;
        if (iVar9 < iVar7) {
          iVar9 = iVar9 + 1;
        }
        thunk_FUN_00ffe618();
        if ((uVar1 & 1) == 0) {
          FUN_01dac7a8();
          uVar8 = uVar1;
          if ((uVar1 & 0x7ffffffe) != 0) {
            uVar8 = uVar1 - 2;
          }
          thunk_FUN_00ffe618();
          uVar8 = FUN_00ff7794(param_1,uVar8 | 1,uVar1,param_3);
          if (uVar8 == uVar1) {
            return;
          }
          FUN_01dacd8c();
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar2);
    }
    if (param_2 != -1) {
      iVar7 = thunk_FUN_01027034(0);
      if ((iVar7 - iVar4 < 0) || (param_2 - (iVar7 - iVar4) < 1)) {
LAB_01dacbac:
        lVar10 = *(long *)PTR_DAT_0235a210;
        goto FUN_01dacbb8;
      }
    }
    iVar7 = 0;
    do {
      uVar6 = *param_1;
      thunk_FUN_00ffe618();
      if ((uVar6 & 1) == 0) {
        FUN_01dac7a8();
        uVar5 = uVar6;
        if ((uVar6 & 0x7ffffffe) != 0) {
          uVar5 = uVar6 - 2;
        }
        thunk_FUN_00ffe618();
        uVar5 = FUN_00ff7794(param_1,uVar5 | 1,uVar6,param_3);
        if (uVar5 == uVar6) {
          return;
        }
        FUN_01dacd8c();
      }
      uVar6 = iVar7 * -0x33333333 + 0x19999998;
      if ((uVar6 >> 3 | iVar7 * -0x60000000) < 0x6666667) {
        FUN_0102ae38(1);
        iVar9 = iVar7 % 10;
LAB_01dacb70:
        if ((param_2 != -1) && (iVar9 == 0)) {
          iVar9 = thunk_FUN_01027034(0);
          if ((iVar9 - iVar4 < 0) || (param_2 - (iVar9 - iVar4) < 1)) goto LAB_01dacbac;
        }
      }
      else {
        if ((uVar6 >> 1 | iVar7 * -0x80000000) < 0x19999999) {
          FUN_0102ae38(0);
          iVar9 = 0;
          goto LAB_01dacb70;
        }
        thunk_FUN_0105efb8();
      }
      iVar7 = iVar7 + 1;
    } while( true );
  }
LAB_01dacba4:
  lVar10 = *(long *)puVar3;
FUN_01dacbb8:
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01dacf60(param_1);
  return;
}


