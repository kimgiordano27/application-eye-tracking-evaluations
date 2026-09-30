/*
FUNCTION_NAME: OVRPlugin.OVRP_1_88_0$$ovrp_SetSimultaneousHandsAndControllersEnabled
ENTRY_POINT: 033f9414
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_5;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_88_0__ovrp_SetSimultaneousHandsAndControllersEnabled(void)

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
  uint *unaff_x19;
  char *unaff_x20;
  int unaff_w21;
  uint uVar15;
  long unaff_x22;
  int iVar16;
  
  FUN_01d7d918(StringLiteral_2809);
  FUN_01d7d918(StringLiteral_9463);
  *(undefined1 *)(unaff_x22 + 0xbde) = 1;
  FUN_033f9984();
  puVar3 = StringLiteral_9463;
  if (*unaff_x20 != '\0') {
    *unaff_x20 = '\0';
    uVar11 = thunk_FUN_01dd295c(StringLiteral_9464);
    uVar11 = FUN_033d6e4c(uVar11,0);
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar12 = thunk_FUN_01de27b8();
    FUN_0328dba4(uVar12,uVar11,0);
    uVar11 = thunk_FUN_01dd295c(StringLiteral_9465);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar12,uVar11);
  }
  if (unaff_w21 < -1) {
    uVar11 = thunk_FUN_01dd295c(
                               Field_UnityEngine_InputSystem_InputActionSetupExtensions_BindingSyntax_m_ActionMap
                               );
    uVar11 = thunk_FUN_01de23e8(uVar11,&stack0x0000000c);
    uVar12 = thunk_FUN_01dd295c(StringLiteral_9466);
    uVar12 = FUN_033d6e4c(uVar12,0);
    thunk_FUN_01dd295c(StringLiteral_1122);
    uVar13 = thunk_FUN_01de27b8();
    uVar14 = thunk_FUN_01dd295c(StringLiteral_9387);
    FUN_0328bd40(uVar13,uVar14,uVar11,uVar12,0);
    uVar11 = thunk_FUN_01dd295c(StringLiteral_9465);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar13,uVar11);
  }
  if (unaff_w21 + 1U < 2) {
    iVar4 = 0;
  }
  else {
    iVar4 = thunk_FUN_01dc9540(0);
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar6 = *unaff_x19;
  thunk_FUN_01da0934();
  if (-1 < (int)uVar6) {
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    FUN_033f99f0();
    return;
  }
  uVar6 = *unaff_x19;
  thunk_FUN_01da0934();
  if ((uVar6 & 1) == 0) {
    FUN_033f9390();
    thunk_FUN_01da0934();
    uVar5 = thunk_FUN_01d99908();
    if (uVar5 == uVar6) {
      return;
    }
    FUN_033f9984();
LAB_033f956c:
    uVar6 = 0x7fffffff;
  }
  else {
    lVar10 = *(long *)puVar3;
    if (*(int *)(lVar10 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar10 = *(long *)puVar3;
    }
    if ((uVar6 & 0x7ffffffe) == **(uint **)(lVar10 + 0xb8)) goto LAB_033f956c;
    thunk_FUN_01da0934();
    uVar6 = thunk_FUN_01d99794();
    uVar6 = uVar6 >> 1 & 0x3fffffff;
  }
  if (unaff_w21 != 0) {
    if (unaff_w21 != -1) {
      iVar7 = thunk_FUN_01dc9540(0);
      if ((iVar7 - iVar4 < 0) || (unaff_w21 <= iVar7 - iVar4)) goto LAB_033f9798;
    }
    if (*(int *)(*(long *)StringLiteral_2809 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    iVar7 = FUN_033f5788();
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
            FUN_01d6903c();
            iVar16 = iVar16 + -1;
          } while (1 < iVar16);
        }
        uVar1 = *unaff_x19;
        if (iVar9 < iVar7) {
          iVar9 = iVar9 + 1;
        }
        thunk_FUN_01da0934();
        if ((uVar1 & 1) == 0) {
          FUN_033f9390();
          thunk_FUN_01da0934();
          uVar8 = thunk_FUN_01d99908();
          if (uVar8 == uVar1) {
            return;
          }
          FUN_033f9984();
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar2);
    }
    if (unaff_w21 != -1) {
      iVar7 = thunk_FUN_01dc9540(0);
      if ((iVar7 - iVar4 < 0) || (unaff_w21 - (iVar7 - iVar4) < 1)) {
LAB_033f97a0:
        lVar10 = *(long *)StringLiteral_9463;
        goto LAB_033f97ac;
      }
    }
    iVar7 = 0;
    do {
      uVar6 = *unaff_x19;
      thunk_FUN_01da0934();
      if ((uVar6 & 1) == 0) {
        FUN_033f9390();
        thunk_FUN_01da0934();
        uVar5 = thunk_FUN_01d99908();
        if (uVar5 == uVar6) {
          return;
        }
        FUN_033f9984();
      }
      uVar6 = iVar7 * -0x33333333 + 0x19999998;
      if ((uVar6 >> 3 | iVar7 * -0x60000000) < 0x6666667) {
        FUN_01dcd344(1);
        iVar9 = iVar7 % 10;
LAB_033f9764:
        if ((unaff_w21 != -1) && (iVar9 == 0)) {
          iVar9 = thunk_FUN_01dc9540(0);
          if ((iVar9 - iVar4 < 0) || (unaff_w21 - (iVar9 - iVar4) < 1)) goto LAB_033f97a0;
        }
      }
      else {
        if ((uVar6 >> 1 | iVar7 * -0x80000000) < 0x19999999) {
          FUN_01dcd344(0);
          iVar9 = 0;
          goto LAB_033f9764;
        }
        Manager_ClawMovement__UI_MoveClawUp();
      }
      iVar7 = iVar7 + 1;
    } while( true );
  }
LAB_033f9798:
  lVar10 = *(long *)puVar3;
LAB_033f97ac:
  if (*(int *)(lVar10 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033f9b58();
  return;
}


