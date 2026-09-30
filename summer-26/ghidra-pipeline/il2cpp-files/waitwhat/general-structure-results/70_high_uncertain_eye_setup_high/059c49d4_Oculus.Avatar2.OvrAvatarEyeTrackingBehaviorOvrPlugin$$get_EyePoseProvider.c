/*
FUNCTION_NAME: Oculus.Avatar2.OvrAvatarEyeTrackingBehaviorOvrPlugin$$get_EyePoseProvider
ENTRY_POINT: 059c49d4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 Oculus_Avatar2_OvrAvatarEyeTrackingBehaviorOvrPlugin__get_EyePoseProvider(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  long *unaff_x19;
  ulong unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  undefined2 uStack000000000000000c;
  
code_r0x059c49d4:
  iVar3 = (int)param_1;
  if ((bool)in_CY && !(bool)in_ZR) {
    if (unaff_w21 == 0x5d) {
      uVar8 = 0xe;
      unaff_x19[3] = 0;
      *(int *)((long)unaff_x19 + 0x8c) = iVar3 + 1;
LAB_059c4b1c:
      *(undefined4 *)(unaff_x19 + 2) = uVar8;
    }
    else {
      if (unaff_w21 != 0x7d) goto LAB_059c4a0c;
      *(int *)((long)unaff_x19 + 0x8c) = iVar3 + 1;
      *(undefined4 *)(unaff_x19 + 2) = 0xd;
      unaff_x19[3] = 0;
    }
    FUN_059bfcd0();
LAB_059c4b24:
    uVar5 = 1;
  }
  else {
    if ((bool)in_ZR) {
      FUN_059c4cc4();
      if ((unaff_x20 & 1) != 0) goto LAB_059c4a78;
      goto LAB_059c4b24;
    }
    if (unaff_w21 == 0x2c) {
      *(int *)((long)unaff_x19 + 0x8c) = iVar3 + 1;
    }
    else {
LAB_059c4a0c:
      if (*(int *)(*(long *)(unaff_x22 + 0x88) + 0xe4) == 0) {
        thunk_FUN_031e5338();
      }
      uVar4 = FUN_058a53dc(unaff_w21,0);
      if ((uVar4 & 1) != 0) {
        uVar1 = *(uint *)((long)unaff_x19 + 0x8c);
LAB_059c4a74:
        do {
          *(uint *)((long)unaff_x19 + 0x8c) = uVar1 + 1;
LAB_059c4a78:
          while( true ) {
            lVar9 = unaff_x19[0x10];
            if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03188cd8();
            }
            uVar1 = *(uint *)((long)unaff_x19 + 0x8c);
            param_1 = (long)(int)uVar1;
            if (*(uint *)(lVar9 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
              FUN_03188ce0();
            }
            uVar2 = *(ushort *)(lVar9 + param_1 * 2 + 0x20);
            unaff_w21 = (uint)uVar2;
            if (0x29 < uVar2) {
              in_CY = 0x2e < unaff_w21;
              in_ZR = unaff_w21 == 0x2f;
              goto code_r0x059c49d4;
            }
            if (0xd < unaff_w21) break;
            if (unaff_w21 == 0) {
              if (*(uint *)(unaff_x19 + 0x11) != uVar1) goto LAB_059c4a74;
              uVar5 = FUN_059c3e44();
              if ((int)uVar5 == 0) {
                *(undefined4 *)((long)unaff_x19 + 0x24) = 0xc;
                return uVar5;
              }
            }
            else {
              if (unaff_w21 == 9) goto LAB_059c4a74;
              if (unaff_w21 == 10) {
                *(uint *)((long)unaff_x19 + 0x8c) = uVar1 + 1;
                *(uint *)(unaff_x19 + 0x12) = uVar1 + 1;
                *(int *)((long)unaff_x19 + 0x94) = *(int *)((long)unaff_x19 + 0x94) + 1;
              }
              else {
                if (unaff_w21 != 0xd) goto LAB_059c4a0c;
                FUN_059c60bc();
              }
            }
          }
          if (unaff_w21 != 0x20) {
            if (unaff_w21 != 0x29) goto LAB_059c4a0c;
            uVar8 = 0xf;
            unaff_x19[3] = 0;
            *(uint *)((long)unaff_x19 + 0x8c) = uVar1 + 1;
            goto LAB_059c4b1c;
          }
        } while( true );
      }
      if ((*(char *)((long)unaff_x19 + 0x71) == '\0') ||
         (iVar3 = (**(code **)(*unaff_x19 + 0x1b8))(), iVar3 != 0)) {
        thunk_FUN_031edd38(PTR_DAT_070c2058);
        FUN_02d35640();
        uVar5 = FUN_058c5a58(0);
        uStack000000000000000c = (undefined2)unaff_w21;
        uVar6 = thunk_FUN_031c39fc(*(undefined8 *)(unaff_x22 + 0x88),&stack0x0000000c);
        uVar7 = thunk_FUN_031edd38(PTR_DAT_07109210);
        FUN_059d2420(uVar7,uVar5,uVar6,0);
        uVar5 = FUN_059bcd60();
        uVar6 = thunk_FUN_031edd38(PTR_DAT_07109218);
                    /* WARNING: Subroutine does not return */
        FUN_03188b9c(uVar5,uVar6);
      }
    }
    FUN_059bfed4();
    uVar5 = 0;
  }
  return uVar5;
}


